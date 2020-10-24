#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_d_i(int num);
int _putchar(char c);
int get_op(char *format, va_list valist);
int get_int_func(const char *c, int arg);
int get_cp_func(char *c, char *arg);

#endif /* HOLBERTON_H */
