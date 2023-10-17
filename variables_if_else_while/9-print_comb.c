#include <stdio.h>
/**
 * main - Ecrit tous les chiffres, separer par une virgule.
(*
 * Return: 0 si code bon
 */
int main(void)
{
	int chiffre = '0';

	while (chiffre <= '9')
	{
		putchar(chiffre);
		if (chiffre != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++chiffre;
	}
	putchar('\n');
	return (0);

}
