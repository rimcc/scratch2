#include "Session/Session.h"
#include "Transactions/Txn.h"
#include "Transactions/Order.h"
#include "Transactions/MMOrder.h"
#include "Transactions/TxnFactory.h"

void do_txn(TxnFactory* f, Session* s, TxnDetails* d)
{
    TxnBase* t = f->createTxn(d);
    s->txn(*t);
}

int main() {
    TSMRSession ts("config.ini");
    ts.logon();
    Session* sess = &ts;
    TxnFactory* af = new TxnFactory;

    auto order = txn::Order().buy().instrument("A-Y").trader("MrX").price(123).qty(456);
    auto mmorder = txn::MMOrder().buy().instrument("A-B").trader("XY").price(124).qty(457);

    do_txn(af, sess, &order);
    do_txn(af, sess, &mmorder);

    FIXSession fs("config.ini");
    fs.logon();
    sess = &fs;
    TxnFactory* ff = new FIXTxnFactory;

    do_txn(ff, sess, &order);
    do_txn(ff, sess, &mmorder);

    return 0;
}
