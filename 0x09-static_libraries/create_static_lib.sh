#!/bin/bash

gcc -c *.c
ar -rcs liball.a *.o
randlib liball.a
