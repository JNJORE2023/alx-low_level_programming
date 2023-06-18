#include <stdio.h>
/**
 *main-prints the alphabet in lowercase
 *
 *Return:0 is success
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
	}
	putchar ('\n');
	return (0);
}
