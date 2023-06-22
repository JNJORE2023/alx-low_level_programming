#include "main.h"

/**
<<<<<<< HEAD
 * print_line - draings a straight line in the terminal
 * @n: count number of times the character _ should be printed
=======
 * print_line - draw a straight line in the terminal
 * @n: number of times the character _ will be printed
>>>>>>> 26c09c5a802958d8f4961d3f5eafd25e49609eda
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
<<<<<<< HEAD

=======
>>>>>>> 26c09c5a802958d8f4961d3f5eafd25e49609eda
