#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
 {
	
    int n;
    printf("Enter the number:\n");
scanf("%d", &n);
int digit, temp, sum = 0;
temp = n;

while(temp > 0)
{
    digit = temp % 10;
    sum = sum + 2*digit;
    temp = temp / 10;
}
printf("The sum of digits is %d\n",sum);
return 0;
}
