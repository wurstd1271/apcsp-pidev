#include "encryptfunc.h"
#include <stdio.h>
int file()
{
printf("output saved in storedvalue.txt.\n");
FILE * Fptr;
Fptr = fopen("/var/tmp/storedvalue.txt", "w");
fputs(string, Fptr);
return 0;
}
