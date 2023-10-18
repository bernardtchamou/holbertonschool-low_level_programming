#include <main.h>
#include <stdio.h>
/**
* alphabet - Affiche l'alphabet en minuscule
* Return: 0 si code bon
*/

void alphabet(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar (10);
}
