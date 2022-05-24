// print largest and second largest numbers

#include<stdio.h>
#include<stdlib.h>

#define max_size 100000

void sort(int bal[],int n)
{
    int i,j,size;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(bal[i] > bal[j])
            {
                size = bal[i];
                bal[i] = bal[j];
                bal[j] = size;
            }
            else
            {
                continue;
            }
            
        }
    }
}

void main()
{
    int bal[max_size],n;
    printf("Enter number of balloons : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bal[i]);
    }
    sort(bal,n);
    for(int i=0;i<2;i++)
        printf("%d\t",bal[i]);
    printf("\n");
}