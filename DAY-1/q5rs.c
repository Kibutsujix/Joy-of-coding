#include<stdio.h>
int main()
{
    unsigned int num=22,num1;
    //add a print statement for befre and after shifts
    printf("Value of num =%04x Before the right shift\n",num);
    num1=num>>2;
    printf("Value of num =%04x After the right shift",num1);
    return 0;
}
