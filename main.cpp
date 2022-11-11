#include "Session/Session.h"
#include "Transactions/Txn.h"
#include "Transactions/Order.h"

int main() {
    TSMRSession ts("config.ini");
    ts.logon();

    txn::Order order = txn::Order().buy().instrument("A-EUR 10Y").trader("MrX").price(123).qty(456);

/*
orderDetails od = buy().price(123).qty(456).instrument("ABC").trader("MrX");
OrderTXNFactory of;
while (true)
{
  TxnBase* ordTxn = of.create_txn(od);
  ts.txn(ordTxn);
  od.price(newPrice);
}
*/


AmpTxn at;

    ts.txn(at);

    return 0;
}
