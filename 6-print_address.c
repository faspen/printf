#include "holberton.h"
/**
  * print_address - print pointer address
  * @c: format specifier
  * @valist: valist
  * Return: address
  */

int print_address(const char *c, va_list valist)
{
	unsigned long int arg = va_arg(valist, unsigned long int);
	int seek = 0;

	switch (*c)
	{
	case 'p':
	{
		if (arg == 0)
			return (_printf("(null)"));

		_putchar('0');
		seek++;
		_putchar('x');
		seek++;
		_printf("%x", arg);
	}
	}
	return (0);
}

