#include <stdio.h>
#include <stdlib.h>

/**
 * main- Entry Point
 *
 * Description: This code..
 *
 * Return: 0 Always (Successful)
 */
int main(void)
{
	char ch;
	int i = 97;

	while (i < 123 && i != 101 && i != 113)
{
	ch = i;
	putchar(ch);
	i++;
}

	putchar('\n');
	return (0);
}


