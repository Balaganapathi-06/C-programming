#include <stdio.h>
#include <conio.h>
void main()
{
  long double i,j,sum=0,n,fact;
  clrscr();
  printf("Enter the range: ");
  scanf("%Lf",&n);
  for(i=1;i<=n;i++)
  {
    fact=1;
    for(j=1;j<=i;j++)
    {
       fact=fact*j;
    }
    sum=sum+i/fact;
  }
  printf("%Lf",sum);
  getch();
}