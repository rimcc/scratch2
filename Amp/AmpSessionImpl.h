//
// Created by rimcc on 07/11/22.
//

#ifndef NEWTESTFRMWK_AMPSESSIONIMPL_H
#define NEWTESTFRMWK_AMPSESSIONIMPL_H

#include "Amp.h"
#include "../Transactions/Txn.h"

class AmpSessionImpl {
public:
    AmpSessionImpl(const char*);
    void transaction(AmpTxn&);
private:
    const char* config_;
    Amp::AmpSession session_;
};


#endif //NEWTESTFRMWK_AMPSESSIONIMPL_H
