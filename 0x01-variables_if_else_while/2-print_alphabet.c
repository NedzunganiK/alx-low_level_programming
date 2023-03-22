#include <stdio.h>

/**
 * main - Entry point
 * discription: 'program that prints alphabets'
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

