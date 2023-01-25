#include "main.h"
#include <stdarg>

/**
 * _printf - Outputs a formatted string.
 *  @format: Character string to print - may contain directives.
 * Return: The numbers of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int n_displayed = o;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (_putchar(format[i]) != -1)
			n_displayed +=

		i++
	}

	va_end(args);
	return (n_displayed);
}
