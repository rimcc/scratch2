//
// Created by rimcc on 07/11/22.
//

#ifndef NEWTESTFRMWK_AMPTRANSREQIMPL_H
#define NEWTESTFRMWK_AMPTRANSREQIMPL_H

#include "../Transactions/TransImpl.h"
#include "Amp.h"

namespace txn {
    class Order;
    class MMOrder;
}

class AmpTransReqImpl : public TransImpl {
public:
    void create(txn::Order const&);
    void create(txn::MMOrder const&);

public:
    Amp::AmpTransRequest ampTransRequest_{};
};


#endif //NEWTESTFRMWK_AMPTRANSREQIMPL_H
