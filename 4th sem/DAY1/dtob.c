// decimal to binary conversion

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int key,rem,count=0;
	printf("Enter key : ");
	scanf("%d",&key);
	while(key != 1)
	{
		rem = key % 2;
		if(rem == 1)
		{
			count++;
		}
		key = key/2;	
	}
	count++;
	printf("sol : %d\n",count);
	
}
