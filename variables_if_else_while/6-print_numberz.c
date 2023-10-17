#include <stdio.h>
/**
 * main - affiche les chiffre en base 10 sans char
 * en utilisant putchar 2 fois max
(*
 * Return: 0 si code bon
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
