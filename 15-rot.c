#include "holberton.h"

/**
 * rot13 - prints rot13 of string
 * @f: formatiing character
 * @valist: agrument list passed to function
 * Return: number of chars printed.
 */

int rot13(const char *f __attribute__((unused)), va_list valist)
{
	char* s = va_arg(valist, char*) ;
	int i, j, count = 0;
	char al[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == al[j])
			{
				count += _putchar(r13[j]);
				break;
			}
		}
		if (al[j] == '\0')
			count += _putchar(s[i]);
	}
	return (count);
}
