//
// Created by rimcc on 08/11/22.
//

#ifndef NEWTESTFRMWK_ORDER_H
#define NEWTESTFRMWK_ORDER_H

namespace txn {

    class OrderBuilder;

    class Order {
    public:
        Order() = default;

        Order& clear();
        Order& buy();
        Order& sell();
        Order& price(int);
        Order& qty(int);
        Order& instrument(const char*);
        Order& trader(const char*);

    public:
        int m_buysell;
        int m_price;
        int m_quantity;
        const char* m_instr;
        const char* m_trader;
    };
} // txn

#endif //NEWTESTFRMWK_ORDER_H
