#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * followed by a new line.
 * Return: 0 is success
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		if(j != 'q' && j != 'e')
			putchar(j);
		j++;
	}
	putchar('\n');
	return (0)
}
