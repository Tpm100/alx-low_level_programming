#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_putchar('\n');
}
