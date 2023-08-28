#include "main.h"
#include <string.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: declared one
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
int x;
int i;

for (x = 0; x < 8; x++)
{
for (i = 0; i < 8; i++)
{
_putchar(a[x][i]);
}
_putchar('\n');
}
}
