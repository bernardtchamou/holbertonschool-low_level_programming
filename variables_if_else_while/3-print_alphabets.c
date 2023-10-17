#include <stdio.h>
/**
 * main - Ecrit l'alphabet en minuscule et majuscule.
(*
 * Return: 0 si code bon
 */
int main(void)
{
	char min = 'a';
	char maj = 'A';

	while (min <= 'z')
	{
		putchar(min);
		min++;
	}
	while (maj <= 'Z')
	{
		putchar(maj);
		maj++;
	}
	putchar('\n');
	return (0);

}
