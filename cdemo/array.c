#include <stdio.h>
int arrayadd(int* arr, int s, int n)
{
for (int i = 0; i < s; i++)
{
  arr[i] = arr[i] + n;
  printf("%d\n", arr[i]);
}
}

int main(void)
{
int arr[100];
for (int i = 0; i<100; i++)
{
  arr[i] = i*i;
}
arrayadd(arr,100,2);
}
