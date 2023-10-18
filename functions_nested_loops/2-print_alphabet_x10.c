
#include "main.h"
#include <stdio.h>

/**
* print_alphabet_x10 - affriche l'alphabet 10 fois
*
* Return: 0 si code bon
*/

void print_alphabet_x10(void)
{
int a = 0;
int l;
while (a++ <= 9)
{
for (l = 'a'; l <= 'z'; l++)
_putchar(l);
_putchar('\n');
}
}
