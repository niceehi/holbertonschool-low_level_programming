#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments passed to the function.
 * @argv: argument vector, an array of strings (arguments).
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}