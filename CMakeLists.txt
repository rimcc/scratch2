cmake_minimum_required(VERSION 3.23)
project(newtestfrmwk)

set(CMAKE_CXX_STANDARD 11)

add_executable(newtestfrmwk main.cpp Session/Session.h Amp/Amp.h FIX/QuickFix.h Transactions/Txn.h Session/TSMRSession.cpp Session/FIXSession.cpp TransImpl.h Amp/AmpTransReqImpl.cpp Amp/AmpTransReqImpl.h Amp/Amp.cpp Amp/AmpSessionImpl.cpp Amp/AmpSessionImpl.h Amp/AmpTxn.cpp Transactions/OrderFactory.cpp Transactions/OrderFactory.h Transactions/Order.cpp Transactions/Order.h)
