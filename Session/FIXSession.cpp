//
// Created by rimcc on 07/11/22.
//
#include "Session.h"
#include "../Transactions/Txn.h"
#include "../FIX/FIXSessionImpl.h"
#include <iostream>

FIXSession::FIXSession(const char *c)
try : session_(new FIXSessionImpl(c))
{ }
catch (...)
{ throw std::runtime_error("Error creating TSMRSession"); }

void
FIXSession::logon()
{std::cout << "FIX logon()\n";}

void
FIXSession::subscribe()
{std::cout << "FIX subscribe()\n";}

void
FIXSession::txn(TxnBase &t)
{
    std::cout << "FIX txn()\n";
    try {
        Txn<FIXTxn> &d = dynamic_cast<Txn<FIXTxn> &>(t);
        session_->transaction(static_cast<FIXTxn &>(d));
    }
    catch (std::bad_cast& e)
    {
        std::cout << "Bad cast " << typeid(t).name() << "\n";
    }
}


