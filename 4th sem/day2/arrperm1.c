#include<stdio.h>
#include<stdlib.h>
#define size 100
void perm(int arr[],int n)
{
    int i,temp;
    temp = arr[0];
    for(i=0;i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    arr[i-1] = temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main()
{
    int *arr,num,p;
    arr = (int*)calloc(20, sizeof(int));
    
    printf("Enter number of elements : ");
    scanf("%d",&num);
    printf("Enter array elements : \n");
    for(int i = 0;i < num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter number of permutations : ");
    scanf("%d",&p);
    for(int i=0;i<p;i++)
    {
        perm(arr,num);
    }
    printf("\n");
}