#include<stdlib.h>
/**
 * _strdup - returns a pointer to copy of str
 * @str: the actual string
 * Return: Returns a pointer
 */
char *_strdup(char *str)
{
	int i, l = 0;
	char *p;

	while (str[l] != '\0')
		l++;
	if (str == NULL)
		return (NULL);
	p = malloc((l + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
