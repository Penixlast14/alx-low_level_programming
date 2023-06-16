#include <stdio.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lalp[26] = "abcdefghijklmnopqrstuvwxyz";
	char ualp[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lalp[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(ualp[i]);
	}

	putchar('\n');
	return (0);
}
