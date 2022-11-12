//
// Created by rimcc on 12/11/22.
//

#ifndef NEWTESTFRMWK_MMORDERFACTORY_H
#define NEWTESTFRMWK_MMORDERFACTORY_H

#include "MMOrder.h"

class TxnBase;

class MMOrderFactory {

public:
    virtual ~MMOrderFactory() {};

    TxnBase *createTxn(txn::MMOrder const &);

private:
};

class FIXMMOrderFactory : public MMOrderFactory {
};



#endif //NEWTESTFRMWK_MMORDERFACTORY_H
