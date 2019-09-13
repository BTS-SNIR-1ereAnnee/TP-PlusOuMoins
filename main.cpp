#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int guess_value = -1;
	int number;
	int nbr_of_guesses;

	printf("\t\t\t- LE NOMBRE MYSTERE -\n\n");

	// Calcul du nombre aléatoire
	srand((unsigned) time(NULL));
	number = rand() % 101;

	nbr_of_guesses = 0;

	printf("Donnez un nombre entre 0 et 100 : ", number);
			scanf("%d",&guess_value);
			nbr_of_guesses++;
			do
			{
				if(guess_value > number)
				{
					printf("\n\nCe nombre est trop grand !\n");
				}
				if(guess_value < number)
				{
					printf("\n\nCe nombre est trop petit !\n");
				}
				printf("Donnez un nombre entre 0 et 100 : ", number);
				scanf("%d",&guess_value);
				nbr_of_guesses++;		
			} while (guess_value != number);

	printf("\n\nCONGRATULATION ! Vous avez trouve le nombre en %d essais !\n\n",nbr_of_guesses);
}
