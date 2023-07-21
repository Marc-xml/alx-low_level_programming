#include"main.h"
/**
 * _isdigit - checks for digit
 * @c: input for the function
 * Return: return 1 if true esle 0
 */
int  _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
