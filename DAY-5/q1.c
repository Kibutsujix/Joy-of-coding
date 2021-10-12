#include<stdio.h>
int main()
{
   int num,a[]={2,6,10,14,18,3,7,11,15,19};
   int i,j;
   for(i=0;i<10;i++)
   printf("%d\t",a[i]);
   printf("\nEnter position of number to be placed (enter after count from 0) :\n");
   scanf("%d",&j);
   printf("enter the number:\n");
   scanf("%d",&num);
   for(i=0;i<j;i++)
   {
       a[i]=a[i];
   }
   for(i=j;i<j+1;i++)
   {
       a[i+1]=a[i];
       a[i]=num;
   }
   
   for(i=j+1;i<10;i++)
   {
       a[i-11]=a[i];
   }
   
   for(i=0;i<10;i++)
   printf("%d\t",a[i]);
    
   return 0; 
}