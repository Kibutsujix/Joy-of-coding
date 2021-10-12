#include <stdio.h>

int main()
{
    int i, j, num[8]={2, 6, 10, 14, 18, 10, 3, 7};

    for(i=0; i<8; i++)
    {
        for(j=i+1; j<8; j++)
        {
            if(num[i]==num[j])
            {
                printf("Not a distinct group.\n");
                return 0;
            }
        }
    }

    printf("It is a distinct group.\n");

    return 0;
}