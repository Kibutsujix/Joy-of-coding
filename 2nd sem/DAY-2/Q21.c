#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is the largest",a);
    else
    printf("%d is the largest",b);
    return 0;
}