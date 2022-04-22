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
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\\"<>,.?/\\|";
	int i;

	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		printf("%c", list[rand() % (sizeof(list - 1))]);
	}
}
