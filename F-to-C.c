// WAP to convert temperature from degree fahrenheit to degree celsius

#include<stdio.h>
#include<conio.h>
int main()
{
  float c,f;
  printf("Enter Temperature in Fahrenheit:\n ");
  scanf("%f", &f);
  c=(f-32)*5/9;
  printf("\n %.2f Fahrenheit = %.2f Celsius",f,c);
  return 0;
}
