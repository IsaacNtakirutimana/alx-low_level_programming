#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that gets the length of a prefix substring
 * @s: destination string
 * @accept: source string
 * Return: returns the number of bytes in the initial segment
 */

char *_strpbrk(char *s, char *accept)
{
char *k;

k = strpbrk(s, accept);

return (k);
}
