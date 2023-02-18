#include <stdlib.h>
#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: This code prints alphabets a-z
 *
 * Return: 0 Always (successful)
 */
int main(void)
{
	char ch;
	int i = 97;

	while (i < 123)
{
	ch = i;
	putchar(ch);
	i++;
}
	putchar('\n');
	return (0);
}
