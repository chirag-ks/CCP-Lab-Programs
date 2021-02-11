// WAP to print sum of squares of first n odd numbers.

#include<stdio.h>
#include<conio.h>
#include<math.h>

void ssum(int);
void main()
{
  int i,n,sum=0;
  printf("\nEnter value of n: ");
  scanf("%d",&n);
  ssum(n);
  printf("\nOdd Numbers between 0 and %d are: ",n);
  printf("\nThe sum of Odd numbers = %d",sum);
  getch();
}
void ssum(int n)
{
  for(i=1;i<=n;i++)
  {
    if(i%2!=0)
    {
      printf("%d, ",i);
      sum=sum+pow(i,2);
    }
  }
}
