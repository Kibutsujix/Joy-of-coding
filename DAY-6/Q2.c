#include<stdio.h>
#include<string.h>
int main()
{
    int i,len=0;
    char a[1000],b[1000];
    char* c;
    printf("Enter string 1:\n");
    gets(a);
    printf("Enter string 2:\n");
    gets(b);
    strcat(a,b);
    len =strlen(a);
    c=strupr(a);
    printf("The concatenated string is:\n %s\n",a);
    printf("length of %s is:\n %d\n",a,len);
    printf("Upper case version of string is:\n %s",c);
    return 0;
}