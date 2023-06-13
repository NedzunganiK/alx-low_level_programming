#include <stdio.h>
#include "main.h"

/**
 * main - Prints name of program
 * @argc: Digit of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
