#include <stdio.h>
/**
 * main - Entry point
 * Print numbers to 0-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
