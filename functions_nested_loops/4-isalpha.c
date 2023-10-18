#include "main.h"
/**
*_islower - indique un caractere
*@c: argument c
*Return: 1 si c est une lettre 0 si autre
*/
int _islower(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
}
