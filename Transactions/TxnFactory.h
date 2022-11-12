//
// Created by rimcc on 08/11/22.
//

#ifndef NEWTESTFRMWK_TXNFACTORY_H
#define NEWTESTFRMWK_TXNFACTORY_H

class TxnBase;
class TxnDetails;

namespace txn {
    class Order;
    class MMOrder;
}

template <typename TxnType, typename T>
TxnBase* create_helper(T const&);

class TxnFactory {
public:
    using TxnType = class AmpTxn;
    virtual ~TxnFactory() {};
    virtual TxnBase* createTxn(TxnDetails*);
    virtual TxnBase* create(txn::Order const&);
    virtual TxnBase* create(txn::MMOrder const&);


};

class FIXTxnFactory : public TxnFactory {
public:
    using TxnType = class FIXTxn;
    virtual TxnBase* create(txn::Order const&);
    ~FIXTxnFactory() {};
};



#endif //NEWTESTFRMWK_TXNFACTORY_H
