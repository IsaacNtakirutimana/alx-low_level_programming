#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int isaac;

isaac = 0;

while (s[isaac] != '\0')
{
isaac++;
}

return (isaac);
}
