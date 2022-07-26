#include <math.h>
#include <stdlib.h>
#include "main.h"

/**
* binary_to_uint - converts binary to int
* @b: Binary number to convert
*
* Return: unsigned int or 0
*/
unsigned int binary_to_uint(const char *b)
{
	int p = 0, i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (*(b + i) != '\0')
	{
		if ((*(b + i) - '0') > 1)
			return (0);
		i++;
	}

	p = i - 1;
	i = 0;

	while (*(b + i) != '\0')
	{
		sum += (*(b + i) - '0') * pow(2, p);
		p--;
		i++;
	}

	return (sum);
}
