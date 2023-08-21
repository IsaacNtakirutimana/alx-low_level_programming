#include "main.h"

/**
*swap_int(int *a, int *b);-swaps the values of two integers
*@a: pointer to the first value to swap
*@b: pointer to the second value to swap
*/
void swap_int(int *a, int *b)
{
int time;

time = *a;
*a = *b;
*b = time;
}
