#include "main.h"
/**
*_islower - indique un caractere est minuscule
*@c: argument c
*Return: 1 si c est minuscule 0 si autre
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
