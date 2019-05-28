#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  float* ptrtod;
  float* ptrtoe;
  float d;
  float f;
  d = 9.46;
  float e;
  e = 6.53;
  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e;
  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %p\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %p\n", ptrtoa);
  printf("the value of d is %f\n", d);
  printf("the address of d is %p\n", ptrtod);
  printf("the value of e is %f\n", e);
  printf("the address of e is %p\n", ptrtoe);
  f = *ptrtoe;
  e = *ptrtod;
  d = f;
  printf("the value of d is %f\n", e);
  printf("the value of e is %f\n", d);
  return 0;
}
