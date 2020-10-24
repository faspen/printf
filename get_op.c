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
