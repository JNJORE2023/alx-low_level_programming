#include <stdio.h>
/**
 * main - Print numbers from 0 to 99.
 * numbers must be separated by commas followed by a space.
 * only use `putchar` to print to console.
 * only use `putchar` up to 5 times.
 * not allowed to use variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar(j + '0');
		putchar(k + '0');

		if (i < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
