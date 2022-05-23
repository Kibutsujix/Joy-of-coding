#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter values of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a<0 && b<0 && c<0)
    printf("Invalid input (Reason: negative number as input)");
    else if(a>b && a>c)
    printf("%d is the largest among a,b and c",a);
    else if(b>a && b>c)
    printf("%d is the largest among a,b and c",b);
    else if(c>a && c>b)
    printf("%d is the largest among a,b and c",c);
    else
    printf("Inavlid inout or numbers are equal");
    return 0;
}