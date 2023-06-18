#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0 is success
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
