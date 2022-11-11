//
// Created by rimcc on 07/11/22.
//
#include "Session.h"
#include "../Transactions/Txn.h"
#include <iostream>
void
FIXSession::logon()
{std::cout << "FIX logon()\n";}

void
FIXSession::subscribe()
{std::cout << "FIX subscribe()\n";}

void
FIXSession::txn(TxnBase &t)
{std::cout << "FIX txn()\n";}

