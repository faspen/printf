#include "holberton.h"
/**
 * get_op - retrieve appropriate function
 *
 * @format: specified function
 * @valist: variadic stuff
 *
 * Return: function
 */

int get_op(char *format, va_list valist)
{
	print_t p[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"d", _print_int},
		{"i", _print_int}
	};
}

/**
 * get_cp_func - string case
 *
 * @c: location in format
 * @arg: va_arg in printf.c
 *
 * Return: count
 */
int get_cp_func(char *c, char *arg)
{
	int i = 0;

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
	return (NULL);
}
