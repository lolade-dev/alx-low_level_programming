#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * keyGen - Function to randomly generates password
 * @N: input length
 */
void keyGen(int N)
{
	int i, randomizer;

	char numbers[], letter[], LETTER[], symbols[], password[N];

	srand((unsigned int)(time(NULL)));

	/* Array of numbers*/
	numbers[] = "0123456789";

	/* Array of lowercase alphabets*/
	letter[] = "abcdefghijklmnoqprstuvwyzx";

	/* Array of uppercase alphabets*/
	LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	/* Array of all the special symbols*/
	symbols[] = "!@#$^&*?";

	/* To select the randomizer inside the loop*/
	randomizer = rand() % 4;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
}
