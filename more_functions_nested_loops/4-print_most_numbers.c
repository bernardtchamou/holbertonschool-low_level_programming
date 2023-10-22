#include "main.h"

/**
*print_most_numbers - affiche de 0 à 9 sauf 2 et 4
*Return: rien
*/

void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50)
		{
			if (c != 52)
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
