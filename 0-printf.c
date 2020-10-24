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
	int r, number;
	va_list valist;

	va_start(valist, format);

	if (format == NULL)
		return (0);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
			r = get_op(format[j], valist);

			if (r >= 0)
			{
				number += r;
			}
		}
		else
		{
			number += _putchar(format[i]);
		}
	}
	va_end(valist);
	return (number);
}
