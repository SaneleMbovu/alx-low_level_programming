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

	for (int i = 123; i > 96; i--)
{
	ch = i;
	putchar(ch);
}

	putchar('\n');
	return (0);
}
