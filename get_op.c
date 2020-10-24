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
		return (putchar(arg));
	case ('d' || 'i'):
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
	return (0);
}
