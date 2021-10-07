#include<stdio.h>
int main()
{
    printf("DATA TYPE                       size in BYTES\n");
    printf("/*********************************************/\n");
    printf("INT                                 %lu\n",sizeof(int));
    printf("CHAR                                %lu\n",sizeof(char));
    printf("FLOAT                               %lu\n",sizeof(float));
    printf("DOUBLE                              %lu\n",sizeof(double));
    printf("UNSIGNED                            %lu\n",sizeof(unsigned));
    printf("LONG                                %lu\n",sizeof(long));
    return 0;
}