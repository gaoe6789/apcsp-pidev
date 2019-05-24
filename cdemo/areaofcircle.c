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
for (float i = 3.5; i<13; i++)
{
  float area = areaofcircle(i);
  printf("The area is %f\n", area);
}
 
}
