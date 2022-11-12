//
// Created by rimcc on 12/11/22.
//

#ifndef NEWTESTFRMWK_MMORDER_H
#define NEWTESTFRMWK_MMORDER_H

#include "TxnDetails.h"

namespace txn {

    class MMOrder : public TxnDetails {
    public:
        TxnBase * accept(TxnFactory *) override;
        public:
            MMOrder& clear();
            MMOrder& buy();
            MMOrder& sell();
            MMOrder& price(int);
            MMOrder& qty(int);
            MMOrder& instrument(const char*);
            MMOrder& trader(const char*);

        public:
            int m_buysell;
            int m_price;
            int m_quantity;
            const char* m_instr;
            const char* m_trader;
    };

} // txn

#endif //NEWTESTFRMWK_MMORDER_H
