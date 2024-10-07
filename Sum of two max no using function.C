#include <stdio.h>
#include <conio.h>
int gresum(int n1,int n2,int n3)
{
  if(n1>n2)
  {
    if(n2>n3)
    return n1+n2;
    else
    return n1+n3;
  }
  else if(n2>n3)
  {
    if(n3>n1)
    return n2+n3;
    else
    return n2+n1;
  }
  else
  {
    if(n2>n1)
    return n3+n2;
    else
    return n3+n1;
  }
}
void main()
{
  int n1,n2,n3,sum;
  clrscr();
  printf("Enter the no 1:");
  scanf("%d",&n1);
  printf("Enter the no 2:");
  scanf("%d",&n2);
  printf("Enter the no 3:");
  scanf("%d",&n3);
  sum=gresum(n1,n2,n3);
  printf("The sum of two maximum no is :%d",sum);
  getch();
}
