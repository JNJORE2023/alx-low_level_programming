#include <stdio.h>
/**
 *main - Print numbers from 0 to 99.
 *numbers must be separated by commas followed by a space.
 *only use `putchar` to print to console.
 *only use `putchar` up to 5 times.
 *not allowed to use variables of type `char`.
 *Return: 0
 */
int main(void)
{
	int n, m ;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');

	return (0);
}
