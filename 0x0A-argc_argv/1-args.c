#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints arguments passed
 * @argc: argument count
 * @argv: arguments passed
 * Return: Always 0 (success)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int i, count = 0;

	for (i = 0; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);

	return (0);
}
