#include"main.h"
/**
 * _isupper - checks if letter is uppercase
 * @c: contains the input
 * Return: return 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
