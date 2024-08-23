#include "main.h"
/**
 * _memset - A block of memory with a specific value must be filled
 * @s: initiating address of memory to be filled
 * @b: value desired
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
		for (; n > 0; i++)
		{
			s[i] = b;
			n--;
			}

		return (s);
}
