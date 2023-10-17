#include <stdio.h>
/**
 * main - Ecrit l'alphabet en sens inverse, en minuscule.
(*
 * Return: 0 si code bon
 */
int main(void)
{
	char lettre = 'z';

	while (lettre >= 'a')
	{
		putchar(lettre);
		lettre--;
	}
	putchar('\n');
	return (0);
}
