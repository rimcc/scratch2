//
// Created by rimcc on 06/11/22.
//

#ifndef NEWTESTFRMWK_AMP_H
#define NEWTESTFRMWK_AMP_H

namespace Amp {
    class AmpQueryReply {
    public:
        void do_rep();
    };

    class AmpTransRequest {
    public:
        int field1;
        int field2;
        const char* name;
        void do_txn();
    };

    class AmpSession {
    public:
        AmpSession(char const*);
        char const* session;
        void transction(AmpTransRequest&);
    };
}

#endif //NEWTESTFRMWK_AMP_H
