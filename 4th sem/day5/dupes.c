// removal of duplicates

#include<stdio.h>
#include<stdlib.h>

#define size 10

void dupes(int arr[],int *n)
{
    int i,j,temp;
    for(i=0;i<*n;i++)
    {
        temp = arr[i];
        for(j = i+1;j<*n;j++)
        {
            if(temp == arr[j])
            {
                for(int k=j;k<*n;k++)
                {
                    arr[k] = arr[k+1];
                }
                *n = *n-1;
            }
        }
    }
}

void main()
{
    int arr[size],i,n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    dupes(arr,&n);
    printf("Array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}