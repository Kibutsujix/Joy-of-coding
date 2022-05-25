// image rotate

#include<stdio.h>
#include<stdlib.h>

#define size 20

void rotate(int mat[][20],int *m,int *n) // m x n matrix
{
    int i,j,temp;
    for(j=0;j<*m;j++)
    {
        for(i=0;i<*n;i++)
        {
            temp = mat[j][i];
            mat[j][i] = mat[i][j];
            mat[i][j] = temp;
        }
    }
    temp = *m;
    *m = *n;
    *n = temp;
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
    rotate(mat,&m,&n);
    printf("Image matrix : \n");
    for(int i =0;i<m;i++)
    {
        for(int j =0;j<n;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}