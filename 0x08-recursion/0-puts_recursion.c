#include"main.h"
/**
 * _puts_recursion - displays a string
 * @s: the string ti be display
 * Return: return 0 (success)
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
