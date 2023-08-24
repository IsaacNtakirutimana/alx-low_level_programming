#include "main.h"
#include <string.h>

/**
*_strncpy - function that compares two strings
*@dest: destination string
*@src: source string
*@n: bytes from src
*Return: returns a pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);

return (dest);
}
