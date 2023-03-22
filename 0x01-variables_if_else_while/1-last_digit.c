#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (ld > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("last digit 0f %d is %d and is zero\n", n, ld);
	else if (ld < 6 && ld != 0)
		printf("last digit of %d is %d and is less than 6 not 0\n", n, ld);
	return (0);
}


