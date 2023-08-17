#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - a prints numbers followed by new line
 * @seperator: pointer to constabt seprator
 * @n: start of input variables
 * Return: returnsnothing
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int index;

	va_start(ap, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(ap, int));
		if (seperator && index != n - 1)
			printf("%s", seperator);
	}
	va_end(ap);
	printf("\n");
}
