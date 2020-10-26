#include "holberton.h"

/**
 * get_int_func -  prints characters accorind to format info c
 * @c: format info passed to function
 * @arg: int to translate then print
 * Return: number of characters printed
 */

int get_int_func(const char *c, int arg)
{
	switch (*c)
	{
	case 'c':
		return (_putchar(arg));
	case 'd':
		return (print_d_i(arg));
	case 'i':
		return (print_d_i(arg));
	}
	return (0);
}


/**
 * get_cp_func - string case
 *
 * @c: location in format
 * @arg: va_arg in printf.c
 *
 * Return: count
 */

int get_cp_func(const char *c, char *arg)
{
	int i = 0;

	if (arg == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}

	switch (*c)
	{
	case 's':
	{
		while (arg[i] != '\0')
		{
			_putchar(arg[i]);
			i++;
		}
		return (i);
	}
	}
	return (0);
}

/**
  * get_special_char - print +, space, or #
  * @c: passed format
  * Return: 0
  */
int get_special_char(const char *c)
{
	switch (*c)
	{
		case '+':
			return (_putchar('+'));
		case ' ':
			return (_putchar(' '));
		case '#':
			return (_putchar('#'));
	}
	return (0);
}
