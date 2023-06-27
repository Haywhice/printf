#include "main.h"

/**
  * _printf - print out values
  * @format: string that will be printed
  *
  * Return: returns pointer to buffer
  */
int _printf(const char *format, ...)
{
	unsigned int i, n_val, s_val;
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
					s_val = put_s(va_arg(args, char *));
					n_val += s_val;
					break;
				case '%':
					puchar('%');
					n_val++;
					break;
				default:
					puchar('%');
					puchar(format[i]);
					n_val += 2;
					break;
			}
		}
	}
	va_end(args);
	return (n_val);
}

