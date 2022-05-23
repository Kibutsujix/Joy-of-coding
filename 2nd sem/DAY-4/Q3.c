#include<stdio.h>
int main()
{
    char day[]={'M','T','W','T','F','S'};
    int i,j,t[6],ws1,avg1;
    float ws2,avg2,f[6];
    printf("Enter Mr.Int's wages :\n");
    for(i=0;i<6;i++)
    scanf("%d",&t[i]);
    ws1=t[0]+t[1]+t[2]+t[3]+t[4]+t[5];
    avg1=ws1/7;
    printf("Mr Int's\n/***************/\n weekly salary is: %d\n Average wage is : %d\n",ws1,avg1);
    printf("Enter Mr.Float's wages :\n");
    for(j=0;j<6;j++)
    scanf("%f",&f[j]);
    ws2=f[0]+f[1]+f[2]+f[3]+f[4]+f[5];
    avg2=ws2/7;
    printf("Mr.Float's\n/*************/\n weekly salary is: %f\n Average wage is : %f",ws2,avg2);

    return 0;
}