#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and array of characters
 * @size: input array size
 * @c: input character
 * Return: pointer to the created array
*/
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr;

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	while (size--)
		arr[size] = c;

	return (arr);
}
