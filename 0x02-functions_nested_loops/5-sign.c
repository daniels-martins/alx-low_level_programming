#include <stdio.h>
#include "main.h"
/**
 * print_sign - check numbers
 * @n : number to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int test = 0;
	if (n > 0)
	{
		test++;
		putchar('+');
	}
	else if (n == 0)
	{
		test = 0;
		putchar('0');
	}
	else
	{
		test--;
		putchar('-');
	}
	return (test);
}
