#include "holberton.h"

/**
 *  print_unsigned_int - prints an unsigned in of base passed
 * @num: number to print/convert
 * @c: character to check for hex format.
 * @base: the base to use for binary, octal, decimal, or hex
 * Return: count of characters printed
 */

int print_unsigned_ints(const char *c, unsigned int num, unsigned int base)
{
	int count = 0;

	if (num / base > 0)
	{
		count += print_d_i((num - (num % base)) / base);
	}
	if (num % base > 9 || *c == 'X')
		count += _putchar(((num % base) - 10) + 'A');
	if (num % base > 9 || *c == 'x')
		count += _putchar(((num % base) - 10) + 'a');
	else
		count += _putchar((num % base) + '0');
	return (count);
}

/**
 * print_u_base - decides which base to use when printing unsigned ints
 * @c: format character to decide base
 * @valist: the list of arguments for printf
 * Return: number of characters printed
 */

int print_u_base(const char *c, va_list valist)
{
	num = va_arg(valist, unsigned int);

	if (*c == 'u')
		return (print_unsigned_ints(c, num, 10));
	else if (*c == 'o')
		return (print_unsigned_ints(c, num, 8));
	else if (*c == 'x' || *c == 'X')
		return (print_unsigned_ints(c, num, 16));
	else if (*c == 'b')
		return (print_unsigned_ints(c, num, 2));
	else
		return (0);
}
