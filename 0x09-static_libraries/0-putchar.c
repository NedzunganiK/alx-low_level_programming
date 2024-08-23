#include <unistd.h>


/**
 *_putchar - jot the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set properly.
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
