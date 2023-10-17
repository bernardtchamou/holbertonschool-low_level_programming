
#include <stdio.h>
/**
 * main - Affiche les valeurs hexadecimal
(*
 * Return: 0 si code bon
 */
int main(void)
{
	int hexa = '0';

	while (hexa <= '9')
	{
		putchar(hexa);
		hexa++;
	}
	hexa = 'a';
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);

}
