#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: This code ..
 *
 * Return: 0 Always (Successful)
 */
int main(void)
{
	int n;
	int last_nr;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_nr = n % 10;
	/* your code goes there */
	if (last_nr > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, last_nr);
}
	else if (last_nr == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last_nr);
}
	else if (last_nr < 6 && last_nr != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_nr);
}
	return (0);
}
