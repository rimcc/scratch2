//
// Created by rimcc on 07/11/22.
//

#include "FIXTransReqImpl.h"
#include "../Transactions/Order.h"
#include "../Transactions/MMOrder.h"

void
FIXTransReqImpl::create(txn::Order const& order)
{
    fixTransRequest_.name = "ORDER";
    fixTransRequest_.field1 = order.m_price;
    fixTransRequest_.field2 = order.m_quantity;
}

void
FIXTransReqImpl::create(txn::MMOrder const& order)
{
    fixTransRequest_.name = "MMORDER";
    fixTransRequest_.field1 = order.m_price;
    fixTransRequest_.field2 = order.m_quantity;
}