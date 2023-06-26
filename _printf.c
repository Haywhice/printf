#include "main.h"

int _printf(const char *format, ...)
{
	unsigned int i, n_val;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			puchar(format[i]);
			n_val += 1;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					puchar(va_arg(args, int));
					n_val++;
					break;
				case 's':
					n_val += put_s(va_arg(args, char *));
					break;
				case '%':
					puchar('%');
					n_val++;
					break;
				default:
					puchar(format[i]);
					n_val++;
					break;
			}
		}
	}
	va_end(args);
	return (n_val);
}
