
#include "main.h"
#include <stdio.h>
/**
* print_alphabet - Affiche l'alphabet en minuscule
* Return: 0 si code bon
*/

void print_alphabet(void)
{
int l;
for (l = 'a'; l <= 'z'; l++)
{
_putchar (l);
}
_putchar (10);
}
