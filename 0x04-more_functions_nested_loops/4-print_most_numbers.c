#include "main.h"
/**
 *print_most_numbers -prints
 *
 *
 *Return: void
 */
void print_most_numbers(void)
{
	char num;
	int i = 48;

	for (i = 48; i <= 57; i++)
{
	num = i;
	if (i == 50)
	continue;

	else if (i == 52)
	continue;

	_putchar(num);


}

	_putchar('\n');
	return (0);
}


