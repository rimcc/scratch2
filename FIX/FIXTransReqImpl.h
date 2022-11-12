//
// Created by rimcc on 07/11/22.
//

#ifndef NEWTESTFRMWK_FIXTRANSREQIMPL_H
#define NEWTESTFRMWK_FIXTRANSREQIMPL_H

#include "../Transactions/TransImpl.h"
#include "FIX.h"

namespace txn {
    class Order;
    class MMOrder;
}

class FIXTransReqImpl : public TransImpl {
public:
    void create(txn::Order const&);
    void create(txn::MMOrder const&);

public:
    FIX::FIXTransRequest fixTransRequest_{};
};


#endif //NEWTESTFRMWK_FIXTRANSREQIMPL_H
