#include "main.h"

/**
 * mul - multiply 2 int
 * @a: first int
 * @b: second int
 * Return: addition of the multiplicattion
 */

int mul(int a, int b)
{
	return (a * b);
}


Task 3
#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
