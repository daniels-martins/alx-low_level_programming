#include <stdio.h>
#include "main.h"

/**
 * main - program begins
 * islower - check for lower case letter
 * @c: character to check the case
 * Return: always 0
 */
int islower(int c)
{
	return (c >= 97 && c <= 122);
}
