//
// Created by rimcc on 07/11/22.
//

#include "AmpTransReqImpl.h"
#include "../Transactions/Order.h"
#include "../Transactions/MMOrder.h"

void
AmpTransReqImpl::create(txn::Order const& order)
{
    ampTransRequest_.name = "ORDER";
    ampTransRequest_.field1 = order.m_price;
    ampTransRequest_.field2 = order.m_quantity;
}

void
AmpTransReqImpl::create(txn::MMOrder const& order)
{
    ampTransRequest_.name = "MMORDER";
    ampTransRequest_.field1 = order.m_price;
    ampTransRequest_.field2 = order.m_quantity;
}