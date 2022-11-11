//
// Created by rimcc on 06/11/22.
//

#ifndef NEWTESTFRMWK_TXN_H
#define NEWTESTFRMWK_TXN_H

struct TxnBase {};

class AmpTransReqImpl;
class FIXTransReqImpl;

template <typename X>
struct TxnTraits;

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
    AmpTxn() : txnImpl_() {}
    typename TxnTraits<AmpTxn>::implType* txnImpl_;
};

template<>
struct TxnTraits<class FIXTxn>
{
    using implType = FIXTransReqImpl;
};
class FIXTxn : public Txn<FIXTxn> {
public:
    FIXTxn() : txnImpl_() {}
    typename TxnTraits<FIXTxn>::implType* txnImpl_;
};



#endif //NEWTESTFRMWK_TXN_H
