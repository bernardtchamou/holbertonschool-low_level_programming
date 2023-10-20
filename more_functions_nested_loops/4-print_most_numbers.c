#include "main.h"

/**
*print_most_numbers - affiche de 0 à 9 sauf 2 et 4
*Return: rien
*/

void print_most_numbers(void)
{
	int chiffre;

	for (chiffre = 48; chiffre < 58; chiffre++)
	{
		if ((chiffre != 50) && (chiffre != 52))
			{
				_putchar(chiffre);
			}
	}
_putchar('\n');
}
