#include<stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: return concatenated string or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int a = 0, b = 0;
	char *s;

	if (s1 == NULL)
		s1 = '';
	if (s2 == NULL)
		s2 = '';
	while (s1 != '\0')
		a++;
	while (s2 != '\0')
		b++;
	s = malloc((a + 1) * sizeof(char)) + malloc((b + 1) * sizeof(char));
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; s2 != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
