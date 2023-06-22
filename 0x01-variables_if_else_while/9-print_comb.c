#include <stdio.h>
/**
 * main - Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by commas and  space.
 * Use `putchar` to print to console
 * Use `putchar` up to four times.
 * Not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
