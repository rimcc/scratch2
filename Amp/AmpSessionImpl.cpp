//
// Created by rimcc on 07/11/22.
//

#include "AmpSessionImpl.h"
#include "AmpTransReqImpl.h"

#include "../Transactions/Txn.h"

AmpSessionImpl::AmpSessionImpl(const char* c)
: config_(c)
, session_(config_)
{}

void
AmpSessionImpl::transaction(AmpTxn& transRequest)
{
    AmpTransReqImpl* ampTransRequest{transRequest.get_txn()};
    session_.transaction(ampTransRequest->ampTransRequest_);
}