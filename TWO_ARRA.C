#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n,arr1[10],arr2[10],sum,max,min;
   clrscr();
   printf("enter the range:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("valus for arr1:");
     scanf("%d",&arr1[i]);
     printf("value for arr2:");
     scanf("%d",&arr2[i]);
   }
   printf("\narr1 ");
   for(i=0;i<n;i++)
   {
     printf("%d ",arr1[i]);
   }
   printf("\narr2 ");
   for(i=0;i<n;i++)
   {
     printf("%d ",arr2[i]);
   }
   printf("\nsum ");
   for(i=0;i<n;i++)
   {
     sum=arr1[i]+arr2[i];
     printf("%d ",sum);
   }
   printf("\nmax ");
   for(i=0;i<n;i++)
   {
     if(arr1[i]>arr2[i])
     {
	max=arr1[i];
     }
     else
     max=arr2[i];
     printf("%d ",max);
   }
   printf("\nmin ");
   for(i=0;i<n;i++)
   {
     if(arr1[i]<arr2[i])
     {
	min=arr1[i];
     }
     else
     min=arr2[i];
     printf("%d ",min);
   }
   getch();
}