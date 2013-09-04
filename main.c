/*
   main.c - main program interface for ctune
*/

#include <stdio.h>

#include "ct/ct_types.h"
#include "ct/ct_endian.h"

int main(int argc, char **argv)
{
   ctInt24u int24;
   int24.low16 = 90;
   int24.hi8 = 74;

   int24.bits[0] = 0;

   printf("%d %d", int24.low16, int24.hi8);
}

