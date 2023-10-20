#include "main.h"

/**
 * _isdigit - fonction vérifie si c'est chiffre ou non
 *@c: argument C
 * Return: 1 ou 0
 */

int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
                return (1);
        else
                return (0);
}
