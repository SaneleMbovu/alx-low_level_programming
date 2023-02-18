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

	for (int i = 97; i < = 122; i++)
{
	ch = i;
	putchar(ch);
}
	putchar('\n');
	return (0);
}
