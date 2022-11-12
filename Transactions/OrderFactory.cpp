//
// Created by rimcc on 08/11/22.
//

#include "OrderFactory.h"
#include "Txn.h"

TxnBase*
OrderFactory::createTxn(txn::Order const& o)
{
    AmpTxn* ampTxn = new AmpTxn;
    ampTxn->make(o);
    return ampTxn;
}
