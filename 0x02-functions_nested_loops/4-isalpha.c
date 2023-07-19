#include"main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: checks inputof function
 * Return: returns 1 if its a letter, otherwise 0 (success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
		c >= 65 && c >= 90)
		return (1);
	return (0);
}
