#include <stdio.h>
#include <math.h>
float x;
float a;
float d;
int areaofCircle(float r)
{
a = M_PI*r*r;
printf("the area of the circle with radius %f is %f\n", r, a);
return 0;
}
int main()
{
for (d = 3.5; d <= 12.5; d++)
{
x = areaofCircle(d);
}
return 0;
}
