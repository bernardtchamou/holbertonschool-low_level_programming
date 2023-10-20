#include "main.h"

/**
 * print_line - fonction qui affiche des traits
 * @n: nombre de traits
 */

void print_line(int n)
{
	for (;n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
