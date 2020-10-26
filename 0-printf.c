#include "holberton.h"

/**
  * _putchar - write character
  * @c: character to print
  * Return: on success 1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _printf - print something
  * @format: character string
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	unsigned int j;
	int r, number = 0;
	va_list valist;

	if (format == NULL)
		return (-1);
	va_start(valist, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
		if (format[j] == 'd' || format[j] == 'c' || format[j] == 'i')
			r = get_int_func((format + j), va_arg(valist, int));
			else if (format[j] == 's')
			r = get_cp_func((format + j), va_arg(valist, char*));
			else if (format[j] == '%')
				r = _putchar('%');
			else if (format[j] == '+' || format[j] == ' ' || format[j] == '#')
				r = get_special_char(format + j);
			else
			{
				_putchar('%');
				_putchar(format[j]);
				r = 2;
			}
			number += r;
		}
		else
			number += _putchar(format[j]);
	}
	va_end(valist);
	return (number);
}
