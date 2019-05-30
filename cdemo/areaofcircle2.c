#include <stdio.h>
#include <math.h>
float areaofcircle(float r)
{
  float area = M_PI*r*r;
  return area;
}
float areaofcircle(float radius);
int main(int argc, char* argv[])
{
  int SIZE = 200;
  char input[SIZE];
  float lowerradius;
  float higherradius;

while (1)
{
  printf("Enter the lower radius\n");
  fgets(input, SIZE, stdin);
  if(sscanf(input, "%f", &lowerradius)==1) break;
  printf("not a valid value\n");
}
while (1)
{
  printf("enter the highest radius\n");
  fgets(input, SIZE, stdin);
  if (sscanf(input, "%f", &higherradius) ==1) break;
  printf("not a valid number\n");
}
for (float i = lowerradius; i <= higherradius; i++)
{
  printf("the radius is %f...", i);
  printf("and its area is %f\n",areaofcircle(i));
}


}
