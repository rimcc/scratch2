//
// Created by rimcc on 07/11/22.
//

#include "FIXSessionImpl.h"
#include "FIXTransReqImpl.h"

#include "../Transactions/Txn.h"

FIXSessionImpl::FIXSessionImpl(const char* c)
: config_(c)
, session_(config_)
{}

void
FIXSessionImpl::transaction(FIXTxn& transRequest)
{
    FIXTransReqImpl* fixTransRequest{transRequest.get_txn()};
    session_.transaction(fixTransRequest->fixTransRequest_);
}