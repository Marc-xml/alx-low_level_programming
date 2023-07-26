#include"main.h"
/**
 * _strlen - prints the length of a string
 * @s:character
 * Return: count
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; ++s)
		++count;
	return (count);
}
