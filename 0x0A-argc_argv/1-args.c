#include <stdio.h>
#include "main.h"

/**
 * main - print the digit of arguments passed to the program
 * @argc: digit of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
