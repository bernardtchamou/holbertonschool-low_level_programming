#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Indique si un nombre est positif, negatif ou nul.
 * Return: 0 si code bon
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n'<'0)
{
printf('%d' is '%\n', n, "is negative");
}
else if (n'>'0)
{
printf('%d' is '%\n', n, "is positive");
}
else
{
printf('%d' is '%\n', n, "is zero");
}

return (0);
}
