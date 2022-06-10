#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n, fp = 0, i, j;
	bool is_prime;

	n = 612852475143;
	for (i = n/2; i > 0; i--)
	{
		is_prime = true;
		for (j = 2; j <= i/2; j++)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}
		if (is_prime && n % i == 0)
		{
			fp = i;
			break;
		}
	}
	printf("%ld\n", fp);
	return (0);
}
