#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first param of type int.
 * @b: second param of type int.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
