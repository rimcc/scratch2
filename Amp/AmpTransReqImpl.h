//
// Created by rimcc on 07/11/22.
//

#ifndef NEWTESTFRMWK_AMPTRANSREQIMPL_H
#define NEWTESTFRMWK_AMPTRANSREQIMPL_H

#include "../TransImpl.h"
#include "Amp.h"

class AmpTransReqImpl : public TransImpl {
public:
    AmpTransReqImpl() = default;

public:
    Amp::AmpTransRequest ampTransRequest_;
};


#endif //NEWTESTFRMWK_AMPTRANSREQIMPL_H
