#include <stdio.h>

/**
 * main - Entry point of all C programs
 * @argc: no. of args
 * @argv: array of pointers to type string arguments
 * Return: always returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
