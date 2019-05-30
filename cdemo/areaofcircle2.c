#include <stdio.h>
#include <math.h>
float x;
float a;
float d;
float e;
float f;
int areaofCircle(float r)
{
a = M_PI*r*r;
printf("the area of the circle with radius %f is %f\n", r, a);
return 0;
}
int main()
{
printf("enter the lowest radius\n");
scanf("%f", &e);
printf("enter the highest radius\n");
scanf("%f", &f);
for (d = e; d <= f; d++)
{
x = areaofCircle(d);
}
return 0;
}
