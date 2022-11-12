//
// Created by rimcc on 12/11/22.
//

#ifndef NEWTESTFRMWK_TXNDETAILS_H
#define NEWTESTFRMWK_TXNDETAILS_H

class TxnFactory;
class TxnBase;

class TxnDetails {
public:
    virtual ~TxnDetails() {};
    virtual TxnBase* accept(TxnFactory*) = 0;
};

#endif //NEWTESTFRMWK_TXNDETAILS_H
