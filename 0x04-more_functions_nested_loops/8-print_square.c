#include "main.h"

/**
 * print_square - function print a sqaure
 * @size: size of square
 * Description: can only use _putchar to print. Use '0' to print square.
 */
void print_square(int size)
{
	int x, y;

	y = 0

	if (n <= 1)
	_putchar('\n');

	while (y < size)
	{
	x = 0;
	while (x < size)
	{
	_putchar('#');
	x++;
	}
	_putchar('\n');
	y++;
	}
}
