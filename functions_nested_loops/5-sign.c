#include "main.h"

/**
* print_sign - indique le signe d'un nombre
* @n: argument n, correspondant au nombre à traiter
* Return: 1 si c est une lettre 0 si autre
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
	}
		return (0);
}
