#include<stdio.h>
int main()
{
    int rank;
    printf("Enter rank obtained:\n");
    scanf("%d",&rank);
    if(rank<=3250)
    printf("Eligible for all branches");
    else if(rank>3250 && rank<=6505)
    printf("Eligible for ISE,E AND C and MEC");
    else if(rank>6505 && rank<=12012)
    printf("Eligible for E and C and MEC");
    else if(rank>12012 && rank<=22340)
    printf("Eligible for MEC");
    else if(rank>22340)
    printf("Not eligible for any course");
    return 0;
}