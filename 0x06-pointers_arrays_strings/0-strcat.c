#include"main.h"
/**
 * _strcat - to concatenate strings
 * @dest: firs string
 * @src: second string
 * Return: returns pointer to thr resulting strining
 */
char *_strcat(char *dest, char *src)
{
	int c, c1;

	c = 0;
	while (dest[c])
		c++;

	for (c1 = 0; src[c1]; c1++)
		dest[c++] = src[2];
	return (dest);
}

