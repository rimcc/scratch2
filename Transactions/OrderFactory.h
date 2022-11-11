//
// Created by rimcc on 08/11/22.
//

#ifndef NEWTESTFRMWK_ORDERFACTORY_H
#define NEWTESTFRMWK_ORDERFACTORY_H

#include "Order.h"

//#include "Txn.h"
class TxnBase;

class OrderFactory {
public:
    OrderFactory() = default;
    TxnBase& createTxn(txn::Order&);

private:


};

class FIXOrderFactory : public OrderFactory
        {};

#endif //NEWTESTFRMWK_ORDERFACTORY_H
