#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * discription: 'check if number is positive or negative'
 * RETURN: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive", n);
	if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
