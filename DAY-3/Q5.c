#include<stdio.h>
int main()
{
    int cw,pin;
    printf("Enter code word:\n");
    scanf("%d",&cw);
    pin = cw +1111;
    if(cw>=1000 && cw<10000)
    printf("pin is : %d",pin);
    else 
    printf("Enter valid code word");
    return 0;
}