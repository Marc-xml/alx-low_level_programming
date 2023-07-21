#include"main.h"
/**
 * print_diagonal - prints diagonal lines
 * @n: input for function
 * Return: returns 0
 */
void print_diagonal(int n)
{
	int i, space;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for ( space = 1; space <= i; ++space)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
