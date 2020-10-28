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
	unsigned int i, number;
	va_list valist;
	int (*print)(const char *, va_list);
	char *buffer = malloc(sizeof(char) * 1024);
	core_d core = {format, va_start(valist, format), buffer, 0, 0);

	if (format == NULL)
	{
		free(buffer);
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			print = get_type(format[i]);
			if (format[i] == '\0')
			{
				free(buffer);
				return (-1);
			}
			else if (print == NULL)
			{
				core.buffer[b_place] = ('%');
				core.buffer[b_place++] = format[i];
			}
			else
				print(format + i, core);
		}
		else
			core.buffer[b_place] = format[i];
	}
	va_end(valist);
	number = ((core.bloops * 1024) + core.b_place);
	free(buffer);
	return (number);
}
