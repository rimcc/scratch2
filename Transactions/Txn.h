//
// Created by rimcc on 06/11/22.
//

#ifndef NEWTESTFRMWK_TXN_H
#define NEWTESTFRMWK_TXN_H

class FIXTransReqImpl;
class AmpTransReqImpl;

namespace txn {
    class Order;
    class MMOrder;
}


template <typename X>
struct TxnTraits;

struct TxnBase {
public:
    virtual ~TxnBase() {} ;
};

template<typename TxnType>
class Txn : public TxnBase {
public:
    typename TxnTraits<TxnType>::implType* get_txn() {
        TxnType& d = static_cast<TxnType&>(*this);
        return d.txnImpl_;
    }

private:
    Txn() = default;
    friend TxnType;
};

template<>
struct TxnTraits<class AmpTxn>
{
    using implType = AmpTransReqImpl;
};

class AmpTxn : public Txn<AmpTxn> {
public:
    AmpTxn();
    template<class T>
    void make(T const&);
public:
    typename TxnTraits<AmpTxn>::implType* txnImpl_{};
};

template<>
struct TxnTraits<class FIXTxn>
{
    using implType = FIXTransReqImpl;
};
class FIXTxn : public Txn<FIXTxn> {
public:
    FIXTxn();
    template<class T>
    void make(T const&);
public:
    typename TxnTraits<FIXTxn>::implType* txnImpl_{};
};



#endif //NEWTESTFRMWK_TXN_H
