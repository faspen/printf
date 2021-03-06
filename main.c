#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2/*, len3, len4*/;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	/*len3 = _printf("Let's try to printf a simple sentence.\n%");
	  len4 = printf("Let's try to printf a simple sentence.\n%");*/
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	/*_printf("Length:[%d], [%i]\n", len3, len4);
	  printf("Length:[%d], [%i]\n", len3, len4);*/
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	/*_printf("Unsigned binary:[%b]\n", ui);
	  printf("Unsigned binary:[%b]\n", ui);*/
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%S]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	/*_printf("Null string:[%s]\n", NULL);
	printf("Null string:[%s]\n", NULL);*/
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	/*_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n"); */ /*printf compile due to gcc*/
	_printf("String:[%R]\n", "ROT13 (\"rotate by 13 places\"");
	printf("String:[EBG13 (\"ebgngr ol 13 cynprf\"]\n");
	return (0);
}
