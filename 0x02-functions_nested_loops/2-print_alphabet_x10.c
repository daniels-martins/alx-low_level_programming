#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_10x - this program pints the letters of the alphabets 10x
 * Return: always 0
 */
void print_alphabet_10x(void)
{
	char c = 'a';
	int limit  = 10;
	int current = 1;
	
	while (current <= limit)
	{
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');

		current++;
	}

}
