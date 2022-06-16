#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: param input string.
 * Return: length of input string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
