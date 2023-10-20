#include "main.h"

/**
 * print_diagonal(int n) - fonction qui dessine une diagonale
 *@n: nombre de slash
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for(j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
