#include <stdio.h>
/**
 * main - Ecrit l'alphabet sauf e et q.
(*
 * Return: 0 si code bon
 */
int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (lettre != 'q' && lettre != 'e')
		{
			putchar(lettre);
		}
		lettre++;
	}
	putchar('\n');
	return (0);
}
