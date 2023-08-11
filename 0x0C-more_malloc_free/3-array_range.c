#include<stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum integer
 * @max: maximum intger
 * Return: retusn a pointer to the created array
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
