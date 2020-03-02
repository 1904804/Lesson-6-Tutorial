#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Exercise 1
/*void main()
{
	int randNumber;
	int guess;
	int high = 10;
	int low = 1;
	char option = 'y';

	srand(time(NULL));
	randNumber = rand() % (high - low + 1) + low;

	printf_s("Do you want to play a game , guess my number. It`s between 1 - 10 \n");
	

	while (option == 'y')
	{
		printf_s("Enter your guess - \n");
		scanf_s("%d", &guess);
		if (guess == randNumber)
		{
			printf_s("Awersome guess it was - %d", randNumber);
			option = 'n';

		}
		else
		{
			printf_s("Wrong guess try again\n");
		}

		
	}
}*/


//Execise 2
/*void main()
{
	int randNumber;
	int high = 10;
	int low = 1;
	char option;


	srand(time(NULL));
	randNumber = rand() % (high - low + 1) + low;

	printf_s("Do you want to play lucky numbers (y/n)\n");
	scanf_s(" %c", &option);

	if (option == 'n')
	{
		printf_s("ok bye then \n");
		return 0;
	}
	

	while (option == 'y') {

		printf_s("Your luck number is %d \n", randNumber);

		switch (randNumber)
		{
		case (5):
			printf_s("Well done you won the jackpot\n");
			break;
		case(3):
			printf_s("Not the jackpot but here`s a little gift\n");
			break;
		case(4):
			printf_s("Not the jackpot but here`s a little gift\n");
			break;
		case(6):
			printf_s("Not the jackpot but here`s a little gift\n");
			break;
		case(7):
			printf_s("Not the jackpot but here`s a little gift\n");
			break;
		default:
			printf_s("Sorry no winner this time :( \n");
		}

		option = 'n'; 
	}
}*/

//Exercise 3
void main()
{
	int coin;
	char option;
	int count = 0;
	int scoreComputer = 0;
	int scoreHuman = 0;


	srand(time(NULL));
	

	while (count < 5)
	{
		coin = rand() % (1 - 0 + 1) + 0;


		printf_s("Please enter your guess , <h or t> \n");
		scanf_s(" %c", &option);
		if (option = 'h')
		{
			if (coin == 0)
			{
				scoreHuman ++;
				printf_s("You`re correct point to you.\n");
			}
			else
			{
				scoreComputer ++;
				printf_s("You`re wrong point to the computer.\n");
			}
			count++;
		}
		else if (option == 't')
		{
			if (coin == 1)
			{
				scoreHuman ++;
				printf_s("You`re correct point to you.\n");
			}
			else
			{
				scoreComputer ++;
				printf_s("You`re wrong point to the computer.\n");
			}
			count++;

		}
		else
			printf_s("You enetered an incorrect option\n");
		
	}
	printf_s("Final score was: Computer %d | User %d ", scoreComputer, scoreHuman);

	if (scoreHuman > scoreComputer)
	{
		printf_s("Human rules!!!!!!");
	}
	else
	{
		printf_s("Computer rules !!!!");
	}
}


//Exercise 4
/*void main()
{

	int myRand[6];
	int myRand2;
	int i;
	int high = 59;
	int low = 1;
	int index;

	int find_index(int a[], int num_elements, int value);

	srand(time(NULL)); //seeds randomness



	for (i = 0; i < 6; i++)
	{
		index = find_index(myRand, 6, myRand);
		if (index == -1)
		{
			myRand[i] = rand() % (high - low + 1) + low;
		}
		else
		{
			myRand[i] = rand() % (high - low + 1) + low;
		}

		
		


	}

	for (i = 0; i < 6; i++)
	{
		printf("lottery number -  %d \n", myRand[i]);
	}

	myRand2 = rand() % (high - low + 1) + low;
	printf("Bounus Ball    -  %d \n", myRand2);


}


int find_index(int a[], int num_elements, int value)
{
	int i;
	for (i = 0; i < num_elements; i++)
	{
		if (a[i] == value)
		{
			return(value);  // it was found
		}
	}
	return(-1);  // if it was not found
}*/