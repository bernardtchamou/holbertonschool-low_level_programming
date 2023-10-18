#include "main.h"

/**
*_isalpha - indique un caractere est une lettre en utilisant le code ASCII
*@c: argument c
*Return: 1 si c est une lettre 0 si autre
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
