//
// Created by rimcc on 08/11/22.
//

#include "Order.h"

namespace txn {
    Order&
    Order::buy()
    { m_buysell = 0; return *this; }

    Order&
    Order::sell()
    { m_buysell = 1; return *this; }

    Order &Order::price(int i) {
        m_price = i;
        return *this;
    }

    Order &Order::qty(int i) {
        m_quantity = i;
        return *this;
    }

    Order &Order::instrument(const char* c) {
        m_instr = c;
        return *this;
    }

    Order &Order::trader(const char* d) {
        m_trader = d;
        return *this;
    }
} // txn