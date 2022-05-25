// sub array by checking sum

#include<stdio.h>
#include<stdlib.h>

#define size 100

void subarr(int sum,int n,int arr[])
{
    int i=0,j=0,temp;
    while(i<n)
    {
        temp = arr[i];
        j=i+1;
        while((temp != sum) && j<n)
        {
            temp += arr[j];
            j++;
        }
        if(temp == sum)
        {
            printf("the range is %d to %d\n",i,j-1);
            for(int k=i;k<j;k++)
                printf("%d ",arr[k]);
            printf("\n");
            return;
        }
        i++;
    }
    if(temp!=sum)
        printf("Not possible to obtain sum!\n");
}

void main()
{
    int arr[size],n,sum;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum : ");
    scanf("%d",&sum);
    subarr(sum,n,arr);
    return;
}