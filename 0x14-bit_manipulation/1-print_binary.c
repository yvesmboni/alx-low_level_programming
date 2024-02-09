#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @c: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (c > 1)
		print_binary(c >> 1);

	_putchar((c & 1) + '0');
}


