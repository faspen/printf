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
	char *str;
	
	str = format;

	va_start(valist, str);

	if (str == NULL)
		return (0);

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == '%')
		{
			j++;
			switch (str[j])
			{
			case ('c' || 'd' || 'i'):
			r = get_int_func((str + j), va_arg(valist, int));
			case 's':
			r = get_cp_func((str + j), va_arg(valist, char*));
			case '%':
					r = _putchar('%');
			default:
			{
				r = 1;
				_putchar(str[j]);
			}
			}
			number += r;
		}
		else
			number += _putchar(str[j]);
	}
	va_end(valist);
	return (number);
}
