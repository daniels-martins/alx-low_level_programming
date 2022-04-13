#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point
 * Return: always 0
 */
void print_alphabet()
{
	char c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
