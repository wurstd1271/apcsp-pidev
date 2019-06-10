#include <stdio.h>
#include "encryptfunc.h"
#include <string.h>


int main (int argc, char *argv[])
{
  char string[100];
  sscanf(argv[1], "%s", &string); 
  int shift;
  int found2 = sscanf(argv[2], "%d", &shift);
  if (found2 !=1)
{
printf("please enter a integer value\n");
return 1;
}
  int eord;
  int found = sscanf(argv[3], "%d", &eord);
  if (found != 1)
 {
  printf("please enter a integer value\n");
  return 1;
 }
 if (!( eord == 1 || eord == 2))
{
printf("Please enter either 1 or 2 for encrypt and decrypt respectivley\n");
return 1;
}
//int porf;
  //found = sscanf(argv[4], "%s", &porf);
  //if (found != 1)
 //{
  //printf("please enter either p or f\n");
  //return 1;
 //}
 char porf = argv[4][0];
 if (!( porf == 'p' || porf == 'f'))
{
printf("Please enter either p or f for print and file respectivley\n");
return 1;
}
switch(eord)
{
case 1:
for (int i = 0; (i < 100 && string[i] != '\0'); i++)
 string[i] = string[i] + shift;
  if (porf == 'p')
{
 printf("Encrypted String: %s\n", string);
}
else
{
file(string);
}
break;


case 2:
for(int i = 0; (i < 100 && string[i] != '\0'); i++)
 string[i] = string[i] - shift;
 if (porf == 'p')
{
 printf("Decrypted string: %s\n", string);
}
else
{
file(string);
}
break;
}
return 0;
}

