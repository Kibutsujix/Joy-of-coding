#include<stdio.h>
int main()
{
    int n,rev=0,num, remainder,count=0 ;
    printf("Enter the number\n");
    scanf("%d",&num); 
    n=num; 
    while(num!=0) 
    {
        remainder = num%10; 
        num = num/10; 
        rev = rev*10+ remainder;
    }
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("Reverse of the number is %d\n",rev);
    printf("No of digits: %d",count);

}