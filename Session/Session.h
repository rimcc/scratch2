//
// Created by rimcc on 06/11/22.
//

#ifndef NEWTESTFRMWK_SESSION_H
#define NEWTESTFRMWK_SESSION_H

class TxnBase;
class AmpTxn;
class FIXTxn;

class Session {
public:
    virtual void logon() = 0;
    virtual void subscribe() = 0;

    virtual void txn(TxnBase&) = 0;
};

class AmpSessionImpl;

class TSMRSession : public Session {
public:
    explicit TSMRSession(char const* c);
    void logon() override;
    void subscribe() override;
    void txn(TxnBase& t) override;

private:
    AmpSessionImpl* session_;
};

class FIXSessionImpl;
class FIXSession : public Session {
public:
    explicit FIXSession(char const* c);
    void logon() override;
    void subscribe() override;
    void txn(TxnBase& t) override;
private:
    FIXSessionImpl* session_;
};

#endif //NEWTESTFRMWK_SESSION_H
