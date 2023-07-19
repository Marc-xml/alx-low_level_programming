#include"main.h"
/**
 * print_alphabet_x10 - utilizes on the _putchar function to print
 *                 the alphabet a - z 10 times
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 'a'; j <= 'z'; ++j)
			_putchar(i);
		_putchar('\n');
	}
}
