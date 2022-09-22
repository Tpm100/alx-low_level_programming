#include "main.h"
#include <ctype.h>
/**
 * _isupper - function that checks for alphabetical character
 *
 * @c: return char type
 *
 * Return: return 0 on success and 1 on fail
 */
int _isupper(int c)
{
	int i = isupper(int c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
