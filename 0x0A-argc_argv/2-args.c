#include<stdlib.h>
#include<stdio.h>
/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: arguments passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argv[i]);
	}

	return (0);
}
