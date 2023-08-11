#include<stdlib.h>
/**
 * malloc_checked - creates new memory an checks it
 * @b: the size of the memory
 * Return: returns th address of the memory create
 */
void *malloc_checked(unsigned int b)
{
	void new_memory;

	new_memory = malloc(b);
	if (new_memory == NULL)
		exit(98);
	return (new_memory);
}
