#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print_type - characters and corespoind function pointers
 * @format: format character
 * @choose_print: chooses function to print with
 * Description - matches formating characters with function that use apprpriate
 * data types to print.
 */

typedef struct print_type
{
	char format;
	int (*choose_print)(const char *, va_list);
} print_t;

int _printf(const char *format, ...);
int (*get_type(char test))(const char *c, va_list valist);
int print_d_i(int num);
int _putchar(char c);
int print_int_func(const char *c, va_list valist);
int print_cp_func(const char *c, va_list valist);
int print_percent(const char *c, va_list valist __attribute__((unused)));
int print_u_base(const char *c, va_list valist)
int print_unsigned_ints(const char *c, unsigned int num, unsigned int base);

#endif /* HOLBERTON_H */
