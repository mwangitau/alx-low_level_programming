#!/bin/bash
gcc -wall -werror -wextra -pendantic -c *.c
ar -rc liball.a *.o
