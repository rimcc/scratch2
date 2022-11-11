//
// Created by rimcc on 07/11/22.
//
#include "Amp.h"
#include <iostream>
namespace Amp {
    AmpSession::AmpSession(char const* c) : session(c) {}

    void AmpSession::transction(Amp::AmpTransRequest &t) {
        t.do_txn();
    }

    void
    AmpQueryReply::do_rep() { std::cout << "AmpQueryReply: do_rep\n"; }

    void
    AmpTransRequest::do_txn() { std::cout << "AmpTransRequest: do_txn()\n";}
}