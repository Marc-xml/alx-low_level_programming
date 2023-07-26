#include"main.h"
/**
 * swap_int - to swap two integers
 * @a:first in
 * @b:second int
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
