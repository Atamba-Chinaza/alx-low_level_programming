#!/bin/bash
cc -create_static_lib.sh -c *.c && ar rc liball.a *.o
