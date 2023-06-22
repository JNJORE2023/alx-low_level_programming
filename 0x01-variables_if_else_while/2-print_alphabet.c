#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Prints the alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz"
		int a;
	for (a = 0; a < 26; a++)
	{
		putchar(alp[a]);
=======
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
>>>>>>> 3924ac66d77f47bb4acb06ff4bde1e81dfea2c64
	}
	putchar('\n');
	return (0);
}
