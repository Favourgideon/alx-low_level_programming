#include <stdio.h>
/**
*main - Print alphabets.
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putcher(alp[i]);
	}
	putchar('\n');
	return (0);
}
