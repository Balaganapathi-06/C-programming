#include <stdio.h>
#include <conio.h>
void main()
{
  int i,j,count,n;
  clrscr();
  printf("enter the range:");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    count=0;
    for(j=2;j<=i;j++)
    {
      if(i%j==0)
      {
	count=count+1;
      }
    }
    if(count==1)
    {
      printf("\n%d is a prime no",i);
    }
  }
  getch();
}




