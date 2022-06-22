#include "main.h"

/**
 * _pow_recursion - prints a string in reverse.
 * @x: input base
 * @y: input power
 * Return: no return.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
