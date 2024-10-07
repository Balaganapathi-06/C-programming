#include <stdio.h>
#include <conio.h>
void main()
{
  int i,n,j,min,max,mark[10];
  clrscr();
  printf("Enter the range:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     printf("Enter the value of index :%d\n",i);
     scanf("%d",&mark[i]);
  }
  min=mark[0];
  max=mark[0];
  for(j=0;j<n;j++)
  {
     if(mark[j]>max)
     {
       max=mark[j];
     }
    if(mark[j]<min)
    {
       min=mark[j];
    }
  }
  printf("the maximum mark is:%d",max);
  printf("\nthe minimum is:%d",min);
  getch();
}
