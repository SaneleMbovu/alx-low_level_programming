#include "main.h"
/**
 * print_most_numbers - print all numbers except 2 and 4
 * Return: 0 on success.
 */
void print_most_numbers(void)
{
	char num:
	int i = 48;

	for (i = 48; i <= 57; i++)
{
	num = i;
	if (i == 50)
	continue;

	else if (i == 52)
	continue;

	putchar(num);


}

	putchar('\n');
	return (0);
}

