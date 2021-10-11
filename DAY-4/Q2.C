#include<stdio.h>
int main()
{
    char day[]={'M','T','W','T','F','S'};
    int i,j,t[6];
    float n,f[6];
    printf("enter Mr.Int's Wages: \n");
    for(i=0;i<6;i++)
    scanf("%d",&t[i]);
    for(i=0;i<6;i++)
    printf("%c -Rs %d\n",day[i],t[i]);
    printf("enter Mr.Float's wages: \n");
    for(j=0;j<6;j++)
    scanf("%f",&f[j]);
    for(j=0;j<6;j++)
    printf("%c -Rs %.4f\n",day[j],f[j]);
    printf("Wages in reverse order:\n");
    printf("/***********************/\n");
    for(i=5;i>0;i--)
    printf("%c -Rs %d\n",day[i],t[i]);
    for(j=5;j>0;j--)
    printf("%c -Rs %f\n",day[j],f[j]);
    return 0;

}