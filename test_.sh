#!/bin/bash
set -x
tar cvf autograde.tar src/
mkdir test
cp autograde.tar test/
cp autograde-Makefile test/Makefile
cp fibo.cpp-answer test/fibo.cpp
tree test/
cd test
make
cd .. && rm autograde.tar && rm -r test
