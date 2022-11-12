#include "Session/Session.h"
#include "Transactions/Txn.h"
#include "Transactions/Order.h"
#include "Transactions/MMOrder.h"
#include "Transactions/OrderFactory.h"
#include "Transactions/MMOrderFactory.h"

int main() {
    TSMRSession ts("config.ini");
    ts.logon();

    auto order = txn::Order().buy().instrument("A-Y").trader("MrX").price(123).qty(456);
    OrderFactory of;
    TxnBase* ordTxn = of.createTxn(order);

    auto mmorder = txn::MMOrder().buy().instrument("A-B").trader("XY").price(124).qty(457);
    MMOrderFactory mmof;
    TxnBase* mmOrdTxn = mmof.createTxn(mmorder);

    ts.txn(*ordTxn);
    ts.txn(*mmOrdTxn);

    return 0;
}
