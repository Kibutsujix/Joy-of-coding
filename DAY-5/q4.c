#include <stdio.h>

int main()
{
    int i, j, count, freq[16], num[16]={2, 6, 10, 14, 22, 18, 10, 3, 7, 11, 15, 19, 3, 7, 10, 14};

	for (i=0; i<16; i++)
        freq[i] = -1;

	for (i=0; i<16; i++)
	{
		count=1;
		for(j=i+1; j<16; j++)
		{
    		if(num[i]==num[j])
    		{
    			count++;

                // to prevent counting of the same number in the array
    			freq[j]=0;
    		}
    	}
    	if(freq[i]!=0)
    	    freq[i]=count;
	}

    printf("The frequency of array elements: \n");
 	for (i=0; i<16; i++)
  	{
  		if(freq[i]!=0)
  		    printf("%d: %d \n", num[i], freq[i]);
  	}

    return 0;
}