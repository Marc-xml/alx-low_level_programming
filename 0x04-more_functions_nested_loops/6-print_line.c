#include"main.h"
/**
 * print_line - prints lines on the terminal
 * @n: parameter for function
 * Return: returns 0 (success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i <= n; ++i)
			_putchar('_');
		_putchar('\n');
	}
}
