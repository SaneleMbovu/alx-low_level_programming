#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry point
 *
 * Description: This code prints alphabets a-z
 *
 * Return: 0 Always (successful)
 */
int main(void)
{
	char lower_case;
	char upper_case;
	int i = 97;
	int z = 65;

	while (i < 123)
{
	lower_case = i;
	putchar(lower_case);
	i++;
}
	while (z < 91)
{
	upper_case = z;
	putchar(upper_case);
	z++;
}
	putchar('\n')
	return (0);
}

