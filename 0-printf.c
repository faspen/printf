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
	int number = 0;
	va_list valist;
	int (*print)(const char *, va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
			print = get_type(format[j]);
			if (print == NULL)
			{
				_putchar('%');
				_putchar(format[j]);
				number += 2;
			}
			else
				number += print(format + j, valist);
		}
		else
			number += _putchar(format[j]);
	}
	va_end(valist);
	return (number);
}
