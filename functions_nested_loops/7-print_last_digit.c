#include "main.h"

/**
 * print_last_digit - affiche le dernier chiffre d'un nombre entier
 * @n: le nombre en question
 * Return: valeur retourné du dernier chiffre
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
