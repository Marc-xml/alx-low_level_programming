#include"main.h"
/**
 * print_square - prints quares
 * @size: is the size of the suare
 * Return; always zero (success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
				_putchar('#');
			_putchar('\n');
		}
	}
}
