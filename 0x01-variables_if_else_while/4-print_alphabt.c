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
	int i;

	for (i = 97; i < 123; i++)
{
	if (i == 103)
	continue;
	else if (i == 113)
	continue;
	else
	ch = i;
	putchar(ch);
}

	putchar('\n');
	return (0);
}


