#include "main.h"
/**
 * _printf - print out values
 * @format: string that will be printed
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
    int n_val = 0;
    va_list args;

    if (format == NULL)
        return n_val;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format != '%')
        {
            puchar(*format);
            n_val++;
        }
        else
        {
            format++;
            if (*format == '\0')
                break;

            switch (*format)
            {
                case 'c':
                    puchar(va_arg(args, int));
                    n_val++;
                    break;
		    case 's':
                    n_val += put_s(va_arg(args, char *));
                    break;
                case 'd':
                case 'i':
                    n_val += put_d(va_arg(args, int));
                    break;
                case '%':
                    puchar('%');
                    n_val++;
                    break;
                default:
                    puchar('%');
                    puchar(*format);
                    n_val += 2;
                    break;
            }
        }
        format++;
    }

    va_end(args);
  return n_val;
}
