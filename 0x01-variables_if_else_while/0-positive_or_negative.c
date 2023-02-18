#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: This code gives out a random number
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
	printf("%d is postive\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else
{
	printf("%d is negative\n", n);
}
	return (0);
}
