#include"main.h"
/**
 * _print_rev_recursion - prints string in reverse
 * @s:string in quetsion
 * Return: returns nothing
 */
int _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
