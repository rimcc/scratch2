cmake_minimum_required(VERSION 3.23)
project(newtestfrmwk)

set(CMAKE_CXX_STANDARD 11)

add_executable(newtestfrmwk main.cpp Session/Session.h Amp/Amp.h
        Transactions/Txn.h Session/TSMRSession.cpp Session/FIXSession.cpp Transactions/TransImpl.h
        Amp/AmpTransReqImpl.cpp Amp/AmpTransReqImpl.h Amp/Amp.cpp Amp/AmpSessionImpl.cpp
        Amp/AmpSessionImpl.h Transactions/TxnFactory.cpp Transactions/TxnFactory.h Transactions/Order.cpp
        Transactions/Order.h Transactions/Txn.cpp Transactions/MMOrder.cpp Transactions/MMOrder.h
        Transactions/TxnDetails.h
        FIX/FIX.cpp FIX/FIX.h FIX/FIXTransReqImpl.h FIX/FIXTransReqImpl.cpp FIX/FIXSessionImpl.cpp FIX/FIXSessionImpl.h)
