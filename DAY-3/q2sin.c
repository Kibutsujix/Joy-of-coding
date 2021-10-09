#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
	
    int n;
    printf("Enter the number:\n");
scanf("%d", &n);
int digit, temp, sum = 0,ssum=0,temp1;
temp = n;


while(temp > 0)
{
    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;
}
temp1 =sum;
while(temp1 > 0)
{
    digit=temp1 %10;
    ssum=ssum + digit;
    temp1= temp1/10;
}

printf("The sum of digits is %d\n",sum);
printf("(single digit sum is %d)",ssum);
return 0;
}
