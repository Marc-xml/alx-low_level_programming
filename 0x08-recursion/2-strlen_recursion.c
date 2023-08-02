#include"main.h"
/**
 * _strlen_recursion - functions to print string
 * @s:string
 * Return: returns nothing
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
