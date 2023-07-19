#include"main.h"
/**
 * _islower - checks wether acharacter is in lowercase
 * @c: checks input of function
 * Return: return 1 if lowercase otherside always 0 (success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
