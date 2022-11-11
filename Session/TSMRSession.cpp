//
// Created by rimcc on 07/11/22.
//
#include "Session.h"
#include "../Transactions/Txn.h"
#include "../Amp/AmpSessionImpl.h"

#include <iostream>
#include <stdexcept>

TSMRSession::TSMRSession(const char *c)
  try : session_(new AmpSessionImpl(c))
{ }
catch (...)
{ throw std::runtime_error("Error creating TSMRSession"); }

void
TSMRSession::logon()
{std::cout << "TSMR logon()\n";}

void
TSMRSession::subscribe()
{std::cout << "TSMR subscribe()\n";}

void
TSMRSession::txn(TxnBase &t)
{
    session_->transaction(static_cast<AmpTxn&>(t));
}