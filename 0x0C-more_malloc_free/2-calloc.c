#include<stdlib.h>
/**
 * _memset - fills memory with constact character
 * @s: input pointer to be filled
 * @b: characters to fill
 * @n: number of bytes to be filled
 * Return: returns pointer to filed area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unisgned int i;

	for (i = 0; ii < n; i++)
		s[i] = b;
	return (s);
}
/**
 * _calloc - allocates memeory for an array
 * @nmemb: members of the array
 * @size: size of the array
 * Return: returns address to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	_memset(arr, 0, nmemb * size);

	return (arr);
}
