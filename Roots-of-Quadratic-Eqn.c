// WAP to calculate roots of quadratic equation. 

#include<stdio.h>
#include<conio.h>
#include<math.h>
void calculation(float, float, float);
int main()
{
  float a,b,c;
  printf("Enter value of a,b,c for Equation in the form of ax^2+bx+c \n");
  scanf("%f %f %f", &a, &b, &c);
  calculation(a,b,c);
  return 0;
}
void calculation(float a, float b, float c)
{
  float root1,root2,D,realnum,imgnum;
  D= (b*b)-(4*a*c);
  if (D>0)             //For real roots
  {
     printf("Real Roots\n");
     root1= (-b + sqrt(D))/(2*a);
     root2= (-b - sqrt(D))/(2*a);
     printf("Root1 = %.2f and Root 2 = %.2f", root1, root2);
  }
  else if (D==0)       //For real and equal roots
  {
     printf("Real and Equal Roots\n");
     root1 = root2 = -b/(2*a);
     printf("Root1 = Root2 = %.2f", root1);
  }
  else                    //For Imaginary roots
  {
      printf("Imaginary Roots\n");
      realnum= -b/(2*a);
      imgnum= (sqrt(-D))/(2*a);
      printf("Root1= (%.2f+ %.2f i) and Root2= (%.2f - %.2f i)", realnum, imgnum, realnum, imgnum);
  }
}
