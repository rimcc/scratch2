//
// Created by rimcc on 08/11/22.
//

#ifndef NEWTESTFRMWK_ORDERFACTORY_H
#define NEWTESTFRMWK_ORDERFACTORY_H

#include "Order.h"

class TxnBase;

class OrderFactory {
public:
    virtual ~OrderFactory() {};
    TxnBase* createTxn(txn::Order const&);
private:


};

class FIXOrderFactory : public OrderFactory {
};

#endif //NEWTESTFRMWK_ORDERFACTORY_H
