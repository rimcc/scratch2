//
// Created by rimcc on 12/11/22.
//
#include "Txn.h"
#include "Order.h"
#include "MMOrder.h"
#include "../Amp/AmpTransReqImpl.h"

#include <stdexcept>

AmpTxn::AmpTxn()
try : txnImpl_(new typename TxnTraits<AmpTxn>::implType)
{}
catch (std::bad_alloc& e)
{

}
template <class T>
void
AmpTxn::make(T const& txn)
{
    txnImpl_->create(txn);
}
template
void AmpTxn::make<txn::Order>(txn::Order const&);

template
void AmpTxn::make<txn::MMOrder>(txn::MMOrder const&);