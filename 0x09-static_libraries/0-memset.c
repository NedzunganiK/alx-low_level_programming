#include "main.h"
/**
 * _memset - Fill a block of memory with a specific value
 * @s: Initiating address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: Altered array with new value for n bytes
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
