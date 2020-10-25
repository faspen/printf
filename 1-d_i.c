#include "holberton.h"

/**
 *  print_d_i - prints a digit or intieger
 * @num: number to print
 * Return: count of characters printed
 */

int print_d_i(int num)
{
	int count = 0;

	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		num += 2000000000;
		num *= -1;
	}
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}
	if (num > 9)
	{
		count = print_d_i(num / 10);
	}
	_putchar((num % 10) + '0');
	return (count++);
}
