#include "encryptfunc.h"
#include <stdio.h>
int file(char h[100])
{
printf("output saved in storedvalue.txt.\n");
FILE * Fptr;
Fptr = fopen("/var/tmp/storedvalue.txt", "w");
fputs(h, Fptr);
return 0;
}
