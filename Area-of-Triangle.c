// WAP to calculate area of triangle using function. 

#include<stdio.h>
#include<conio.h>
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
   printf("Enter the value of Base and Height \n");
   scanf("%f %f",&b,&h);
   ar = area(b,h);
   printf("Area of the Triangle is %.2f", ar);
   return 0;
}
