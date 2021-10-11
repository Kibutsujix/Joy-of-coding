#include<stdio.h>
int main()
{
    char day[]={'M','T','W','T','F','S'};
    int i,j,h1,t1,t2,t[6];
    float h2,f[6];
    printf("Enter Mr.Int's wages:\n");
    for(i=0;i<6;i++)
    scanf("%d",&t[i]);
    printf("Enter Mr.Float's wages:\n");
    for(j=0;j<6;j++)
    scanf("%f",&f[j]);
    h1=t[0];
    for(i=1;i<6;i++)
    {
        if(t[i]>h1)
        {
            h1=t[i];
            t1=i;
        }    
    }
    h2=f[0];
    for(j=1;j<6;j++)
    {
        if(f[j]>h2)
        {
            h2=f[j];
            t2=j;
        }    
    }
    printf("Mr.Int can party on %c\n",day[t1]);
    printf("Mr.Float can party on %c",day[t2]);
    return 0;
}