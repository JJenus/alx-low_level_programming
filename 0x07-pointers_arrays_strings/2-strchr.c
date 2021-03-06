#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = NULL;
	while (*(s + i) != '\0')
	{
		if(*(s + i) == c)
		{
			ptr = &*(s + i);
			break;
		}
		i++;
	}

	return (ptr);
}
