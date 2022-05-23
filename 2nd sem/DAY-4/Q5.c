
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void guess(int N)
{
	int chitnum, guess, attempt = 0;

	
	chitnum = rand() % N;

	printf("chit number picked between 1 and %d\n",N);

	do
    {

		if (attempt > 10) {
			printf("\nYou Loose!\n");
			break;
		}

		
		scanf("%d", &guess);

		
		if (guess > chitnum )
        {
            printf("guess again\n");
            attempt+=1;
        }
        if (guess < chitnum)
        {
            printf("Guess again\n");
            attempt+=1;
        }
       
	} while (guess != chitnum);
        if(guess==chitnum)
			printf("You guessed the number in %d attempts!\n",attempt);

}


int main()
{
	int N = 10;

	
	guess(N);

	return 0;
}
