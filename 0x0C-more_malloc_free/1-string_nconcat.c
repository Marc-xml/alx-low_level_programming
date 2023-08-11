#include<stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: seocnd string
 * @n: first n bytes of s1
 * Return: returns pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, i, j;
	char *final_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	if (n > b)
		n = b;
	final_string = malloc((a + n + 1) * sizeof(char));
	if (final_string == NULL)
		return (NULL);
	for (i = 0; s1[i] < a; i++)
		final_string[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		final_string[i] = s2[j];
		i++;
	}
	final_string[i] = '\0';
	return (final_string);
}
