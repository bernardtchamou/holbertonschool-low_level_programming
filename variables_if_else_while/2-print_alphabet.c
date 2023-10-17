#include <stdio.h>
/**
 * main - Ecrit l'aphabet en miniscule.
(*
 * Return: 0 si code bon
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
