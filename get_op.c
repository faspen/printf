#include "holberton.h"

/**
 * get_type - checks the format character and  returns function pointers
 * @test: format char to test
 * Return: pointer to print function that thakes the right type
 */

int (*get_type(char test))(const char *c, va_list)
{
	int i;
	print_t operators[] = {
		{'c', print_int_func}, {'d', print_int_func},
		{'i', print_int_func}, {'s', print_cp_func},
		{'r', print_cp_func}, {'u', print_u_base},
		{'b', print_u_base}, {'o', print_u_base},
		{'x', print_u_base}, {'X', print_u_base},
		{'%', print_percent}, {'S', print_S},
		{'R', rot13}, {'%', print_percent},
		{0, NULL}
	};

	for (i = 0; operators[i].format != 0; i++)
	{
		if (test == operators[i].format)
			return (operators[i].choose_print);
	}
	return (NULL);
}

/**
 * print_int_func -  prints characters accorind to format info c
 * @c: format info passed to function
 * @valist: valist passed form print to get agument
 * Return: number of characters printed
 */

int print_int_func(const char *c, va_list valist)
{
	int arg = va_arg(valist, int);

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
 * print_cp_func - print string
 * @c: location in format
 * @valist: valist from printf to get argument
 * Return: count
 */

int print_cp_func(const char *c, va_list valist)
{
	int i = 0;
	char *arg = va_arg(valist, char*);

	if (arg == NULL)
		return (_printf("%s", "(null)"));
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
	case 'r': /* print string in reverse */
	{
		int len = 0;

		while (arg[i] != '\0')
		{
			i++;
		}
		for (i--; i >= 0; i--)
			len += _putchar(arg[i]);
		return (len);
	}
	}
	return (0);
}

/**
  * print_S - print string, exclude certain ASCII values
  * @c: argument passed
  * @valist: get argument
  * Return: string
  */
int print_S(const char *c, va_list valist)
{
	int i, seek = 0;
	char *arg = va_arg(valist, char *);

	if (arg == NULL)
		return (_printf("(null)"));
	switch (*c)
	{
	case 'S':
	{
		for (i = 0; arg[i]; i++)
		{
			if ((arg[i] > 0 && arg[i] < 32) || arg[i] >= 127)
			{
				_putchar('\\');
				seek++;
				_putchar('x');
				seek++;
				if (arg[i] > 0 && arg[i] < 16)
				{
					_putchar('0');
					seek++;
				}
				seek += _printf("%X", arg[i]);
			}
			else
			{
				_putchar(arg[i]);
				seek++;
			}
		}
		return (seek);
	}
	}
	return (0);
}
/**
 * print_percent - prints the % character
 * @c: character to print
 * @valist: unused valist
 * Return: number of char printed
 */

int print_percent(const char *c, va_list valist __attribute__((unused)))
{
	if (*c == '%')
		return (_putchar('%'));
	return (0);
}
