//
// Created by rimcc on 12/11/22.
//

#include "MMOrder.h"

namespace txn {
    MMOrder&
    MMOrder::buy()
    { m_buysell = 0;  return *this; }

    MMOrder&
    MMOrder::sell()
    { m_buysell = 1;  return *this; }

    MMOrder &MMOrder::price(int i) {
        m_price = i;
        return *this;
    }

    MMOrder &MMOrder::qty(int i) {
        m_quantity = i;
        return *this;
    }

    MMOrder &MMOrder::instrument(const char* c) {
        m_instr = c;
        return *this;
    }

    MMOrder &MMOrder::trader(const char* d) {
        m_trader = d;
        return *this;
    }
} // txn