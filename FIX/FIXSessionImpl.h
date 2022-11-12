//
// Created by rimcc on 07/11/22.
//

#ifndef NEWTESTFRMWK_FIXSESSIONIMPL_H
#define NEWTESTFRMWK_FIXSESSIONIMPL_H

#include "FIX.h"
#include "../Transactions/Txn.h"

class FIXSessionImpl {
public:
    FIXSessionImpl(const char*);
    void transaction(FIXTxn&);
private:
    const char* config_;
    FIX::FIXSession session_;
};


#endif //NEWTESTFRMWK_AMPSESSIONIMPL_H
