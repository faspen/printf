#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
  * _printf - print something
  * @format: character string
  * Return: number of characters printed
  */

int _printf(const char *format, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, format);
