#include "main.h"

/**
 * recursive_operation - returns the natural square root of a number.
 * @n: input number.
 * @r: root.
 * Return: square root or -1.
 */
int recursive_operation(int n, int r)
{
	if (r % (n / r) == 0)
	{
		if (r * (n / r) == n)
			return (r);
		else
			return (-1);
	}
	return (0 + recursive_operation(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (recursive_operation(n, 2));
}
