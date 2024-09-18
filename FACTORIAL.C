#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i,j,fact=1;
 clrscr();
 printf("enter the no:");
 scanf("%d",&n);
 for(i=n;i!=0;i=i-1)
 {
   fact=fact*i;
 }
 printf("%d",fact);
 getch();
}
