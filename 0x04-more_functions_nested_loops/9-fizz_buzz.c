#include<stdio.h>
/**
 * main - fizzbuzz test
 *Return :Always 0 (success)
 */
int main(void)
{
	int count, space;

	for (count = 1; count <= 100; ++count)
	{
		for (space = 1; space <= 100; ++space)
			printf(" ");
		if (count % 3 == 0)
			printf("Fizz");
		else if (count % 5 == 0)
			printf("Buzz");
		else if ((count % 3 == 0) && (count % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", count);
	}

	return (0);
}
