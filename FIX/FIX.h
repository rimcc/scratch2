//
// Created by rimcc on 06/11/22.
//

#ifndef NEWTESTFRMWK_FIX_H
#define NEWTESTFRMWK_FIX_H

namespace FIX {
    class FIXQueryReply {
    public:
        void do_rep();
    };

    class FIXTransRequest {
    public:
        int field1{};
        int field2{};
        const char* name{};
        void do_txn();
    };

    class FIXSession {
    public:
        FIXSession(char const*);
        char const* session;
        void transaction(FIXTransRequest &t);
    };
}

#endif //NEWTESTFRMWK_AMP_H
