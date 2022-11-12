//
// Created by rimcc on 07/11/22.
//
#include "FIX.h"
#include <iostream>
namespace FIX {
    FIXSession::FIXSession(char const* c) : session(c) {}

    void FIXSession::transaction(FIX::FIXTransRequest &t) {
        t.do_txn();
    }

    void
    FIXQueryReply::do_rep() { std::cout << "FIXQueryReply: do_rep\n"; }

    void
    FIXTransRequest::do_txn() { std::cout << "FIXTransRequest: do_txn(): "
    << name << " : " << field1 << " : " << field2 <<"\n";}
}