
#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void guess(int N)
{
	int chitnum, guess, attempt = 0;

	
	chitnum = rand() % N;

	printf("chit number picked between 1 and %d\n",N);

	do {

		if (attempt > 10) {
			printf("\nYou Loose!\n");
			break;
		}

		
		scanf("%d", &guess);

		
		if (guess > chitnum && guess < chitnum)
        {
            printf("guess again");
            attempt++;
        }
		else
			printf("You guessed the number in %d attempts!\n",attempt);

	} while (guess != chitnum);
}


int main()
{
	int N = 10;

	
	guess(N);

	return 0;
}
