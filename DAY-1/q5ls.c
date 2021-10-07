#include<stdio.h>
int main()
{
    //add a print statement for before and after left shift
    unsigned int num=22,num1;
    printf("Value of num =%04x Before the left shift\n",num);
    num1=num<<2;
    printf("Value of num =%04x After the left shift\n",num1);
    return 0;
}