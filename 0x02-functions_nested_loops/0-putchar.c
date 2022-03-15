#include <stdio.h>

/*
 * main - Entry block
 * Description: print holberton on new line   "holberton": Unkown word.
 * Return: 0
 */
int main(void)
{
	char c[5] = "_putchar";

	int i = 0;

	while (i < 5)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
