#include "main.h"

/**
 * print_most_numbers - prints numbers and letters
 *
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		_putchar(n + '0');

	for (n = 'a'; n <= 'f'; n++)
	{
		if (n != 'e')
			_putchar(n);
	}

	_putchar('\n');
}
