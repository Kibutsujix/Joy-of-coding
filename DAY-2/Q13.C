#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:\n");
    scanf("%d",&age);
    (age>=18)?printf("Eligible for voting"):printf("Not eligible for voting");
    return 0;
}
