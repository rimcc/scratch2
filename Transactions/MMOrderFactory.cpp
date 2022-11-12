//
// Created by rimcc on 12/11/22.
//

#include "MMOrderFactory.h"
#include "Txn.h"

TxnBase*
MMOrderFactory::createTxn(txn::MMOrder const& o)
{
    AmpTxn* ampTxn = new AmpTxn;
    ampTxn->make(o);
    return ampTxn;
}