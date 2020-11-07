#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
	srand (time(NULL));

	int n = rand() % 100 + 1,
	    c = -1;

	while ( n != c )
	{
		if ( c == -1)
			printf("Guess a number 1-100\n");
		else if (c > n)
			printf("Too high!\n");
		else if (c < n)
			printf("Too low!\n");

		printf("Enter your guess: ");
		scanf ("%d",&c);
	}

	printf("Winner! Yes, the answer was %d \n",n);
}
