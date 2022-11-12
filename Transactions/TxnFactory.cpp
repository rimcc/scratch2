//
// Created by rimcc on 08/11/22.
//

#include "TxnFactory.h"
#include "Txn.h"
#include "Order.h"

#include <memory>

TxnBase*
TxnFactory::createTxn(TxnDetails* p)
{
    return p->accept(this);
}

template <typename TxnType, typename T>
TxnBase* create_helper(const T & t)
{
    TxnType* txn{new TxnType};
    txn->make(t);
    return txn;
}


template TxnBase* create_helper<AmpTxn>(txn::Order const&);
template TxnBase* create_helper<AmpTxn>(txn::MMOrder const&);

TxnBase*
TxnFactory::create(txn::Order const & o)
{ return create_helper<TxnType>(o); }

TxnBase*
TxnFactory::create(txn::MMOrder const& o)
{ return create_helper<TxnType>(o); }

TxnBase*
FIXTxnFactory::create(txn::Order const & o)
{ return create_helper<FIXTxn>(o); }

