#include "main.h"
/**
 * times_table - a function that prints thr 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single edit
 */
void times_table(void)
{
	int rone, cone, d;
	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar('');
	for (cone = 1; cone <= 9; cone++)	
	{
		d = (rone * cone);
	 	if ((d / 10) > 10)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar('');
		}
		_putchar((d %n10) = '0');
		if (cone < 9)
		{
			_putchar(',');
			_putchar('');
		}
		}
		_putchar('\n');
	}
}	