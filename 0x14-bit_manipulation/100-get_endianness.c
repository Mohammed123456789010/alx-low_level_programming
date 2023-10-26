#include "main.h"

/**
 * get_endiannes - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endiannes(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
