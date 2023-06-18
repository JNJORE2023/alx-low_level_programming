#include <stdio.h>
/**
 * main - Print all numbers of base 10, starting from 0.
 * Do not use any variable of type char.
 * Use `putchar` to print to console.
 * Use `putchar` twice.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
