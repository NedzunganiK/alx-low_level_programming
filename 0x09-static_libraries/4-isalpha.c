#include "main.h"

/**
 * _isalpha - examines for alphabetic char
 * @c: the char to be examined
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
