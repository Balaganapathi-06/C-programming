#include <stdio.h>
#include <conio.h>
void main()
{
  int i,j,k,n=3;
  clrscr();
  for(i=1;i<=n;i++)
  {
     for(j=1;j<=n;j++)
     {
	for(k=1;k<=n;k++)
	{
	   printf("%d%d%d\n",i,j,k);
	}
     }
  }
  getch();
}