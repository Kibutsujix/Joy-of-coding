// image rotate

#include<stdio.h>
#include<stdlib.h>

#define size 20
int transpose[size][size];

void rotate(int mat[][20],int m,int n) // m x n matrix
{
    int i,j,k=0,temp;
    //transpose of the matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i] = mat[i][j];
        }
    }
    // rotation logic
    for(i=0;i<n/2;i++)
    {
        for(j=0;j<m;j++)
        {
            temp = transpose[i][j];
            transpose[i][j] = transpose[n-i-1][j];
            transpose[n-i-1][j] = temp;
        }
    }

    //print the transpose of matrix
    printf("Image matrix : \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int mat[size][size],m,n;
    printf("Enter matrix dimensions : \n");
    scanf("%d%d",&m,&n);
    printf("Enter image matrix : \n");
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    rotate(mat,m,n);
}