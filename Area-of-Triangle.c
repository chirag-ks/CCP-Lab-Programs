// WAP to calculate area of triangle using functions.

#include<stdio.h>
#include<math.h>

float area(float b, float h)
{
  float a;
  a=(b*h)/2 ;
  return a;
}
int main()
{

  float b,h,ar;
  printf("\nEnter the value of base and height \n");
  scanf("%f %f", &b, &h);
  ar= area(b,h);
  printf("\nArea of the triangle is %f", ar);
  return 0;
}
