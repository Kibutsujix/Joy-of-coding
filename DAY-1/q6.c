#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter value of a:\n");
    scanf("%f",&a);
    printf("Enter value of b:\n");
    scanf("%f",&b);
    //using ternary operator
    (a>b)?printf("%f is greater than %f",a,b):printf("%f is greater than %f",b,a);
    return 0;
}
