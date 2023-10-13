#include <stdio.h>

/**
* main - fonction pricipale
* printf - commande affichant le message
* Sizeof - indique la taille d'un type d'entier
* Return: retourner 0 si le code n'a pas d'erreur
*/

int main(void)

{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
