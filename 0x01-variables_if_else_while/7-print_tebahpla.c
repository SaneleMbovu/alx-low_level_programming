#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry Point
 *
 * Description: This code prints alphabets in reverse order
 *
 * Return: 0 Always (Successful)
 */
int main(void)
{
	char ch;
	int i = 123;

	while (i > 96)
{
	ch = i;
	putchar(ch);
	i--;
}

	putchar('\n');
	return (0);
}
