#include "main.h"
#include <string.h>

/**
*_strncat - a function that concatenates two strings
*@dest: destination string
*@src: source string
*@n: bytes from src
*Return: returns a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);

return (dest);
}
