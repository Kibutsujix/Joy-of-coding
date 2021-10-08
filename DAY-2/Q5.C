#include<stdio.h>
int main()
{
    int n,amount,tend,twend;
    printf("enter number of books:\n");
    scanf("%d",&n);
    amount=n*10;
    tend=amount-n/10;
    twend=amount-n/5;
    if(n<=10000)
        printf("no discount\n amount is :%d",amount);
    else if(n>10000 && n<=15000)
        printf("'10%' discount \n amount after discount=%d",tend);
    else if(n>15000 && n<=20000)
        printf("'20%' discount \n amount after discount=%d",twend);
    return 0;

}