#include <stdio.h>

/**
 * main - Entry point
 * Discription: 'print numbers of base 10'
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
