#include"stdlib.h"
/**
 * create_array - crates an array and initialises it
 * @size: siz eof the array
 * @c: chracter ot be stored
 * Return: Return NULL if empty
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < a; i++)
	{
		a[i] = c;
	}
	return (a);
}
