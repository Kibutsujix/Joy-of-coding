// debug the code
/*
code 1
#include<stdio.h>

int main()
{
	int b = 14;
	int *ptr = &b;
	int **pptr = &ptr;
	printf("the value of b is %d\n", b);
	printf("the value of b is %d\n", *ptr);
	printf("the value of b is %d\n", **pptr);
	return 0;
}
*/

// code 2 
#include<stdio.h>
int main()
{
	int a =20;
	float b=20.2;
	int *ptr = &a;
	printf("the value of a is %d\n", *ptr);
	float *pptr = &b;
	printf("the value of b is %.2f\n", *pptr);
}

