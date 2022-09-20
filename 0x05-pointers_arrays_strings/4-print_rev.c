#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: string to reverse
 * Return: nothing
 */

void print_rev(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	while (counter)
	{
		putchar(s[counter - 1]);
		counter--;
	}
	putchar(10);
}
