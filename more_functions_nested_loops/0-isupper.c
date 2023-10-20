#include "main.h"

/**
 * _isupper - fonction indique si une lettre est Majuscule ou non
 *@c: argument C
 * Return: 1 ou 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
