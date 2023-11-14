#!/usr/bin/bash

cc -fPIC -c *.c

cc -shared *.o -o liball.so