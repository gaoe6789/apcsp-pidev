#include <stdio.h>
#include <math.h>

float areaofcircle(float radius)
{
  float area;
  area = M_PI * radius * radius;
  return area;
}


int main()
{
  char input[256];
  float r1;
  float r2;
  printf("What is the lower radius? \n");
  while (1)
  {
    fgets(input,256,stdin);
    if (sscanf(input, "%f", &r1) ==1) break;
    printf("Please enter a valid radius: \n");
  }
  printf("What is the upper radius \n");
  while(1)
    {
    fgets(input,256,stdin);
    if (sscanf(input, "%f", &r2) ==1) break;
    printf("Please enter a valid radius: \n");
  }
for (int i = r1; i <= r2; i++)
{
  float area = areaofcircle(i);
  printf("The area is %f\n", area);

}
  
}
 
