#include <stdio.h>
#include <conio.h>
void main()
{
  int i,num1,n,num2,sum;
  clrscr();
  printf("Enter a range:");
  scanf("%d",&n);
  printf("Enter a number1:");
  scanf("%d",&num1);
  printf("Enter a number2:");
  scanf("%d",&num2);
  printf("%d %d ",num1,num2);
  for(i=3;i<=n;i++)
  {
    sum=num1+num2;
    printf("%d ",sum);
    num1=num2;
    num2=sum;
  }
  getch();
}