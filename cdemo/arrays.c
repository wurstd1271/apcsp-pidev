#include <stdio.h>
int arrayAdd(int arr[], int s, int n)
{
int x;
for (int i = 0; i < s; i++)
{
  x = arr[i] + n;
  arr[i] = x;
}
return 0;
}
int main()
{
int y;
int b;
int arr[100];
for (int i = 0; i < 100; i++)
{
b = i*i;
arr[i] = b;
printf("%d\n", arr[i]);
}
y = arrayAdd(arr,100, 2);
for (int t = 0; t < 100; t++)
{
 printf("%d\n", arr[t]); 
}
return 0;
}
