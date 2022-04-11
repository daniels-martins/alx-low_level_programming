#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - the stgart of the program
 *
 *Return: Always 0 
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%Lf is  positive\n");
	} else
	{
		printf("%Lf is negative\n");
	}
	return (0);
}
