#include"main.h"
/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	putchar("\n");

	return (0);
}
