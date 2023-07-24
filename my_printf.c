#include "main.h"
/**
 * my_printf - Function that print string
 * @format: First argument passed
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int re_val = 0;
	int r_val;
	va_list args_list;

	va_start(args_list, format);

	for (; format[i] != '\0'; i++)
	{
		if
			(format[i] != '%')
			{
				my_putchar(format[i]);
			}
		else if (format[i + 1] == 'c')
		{
			my_putchar(va_arg(args_list, int));
			i++;

		}
		else if (format[i + 1] == 's')
		{
			r_val = put_str(va_arg(args_list, char*));
			i++;
			re_val += (r_val - 1);
		}
		else if (format[i + 1] == '%')
		{
			my_putchar('%');
			i++;
		}
		else if (format[i + 1] || format[i + 1] == 'd' || 'i')
		{
			put_int(va_arg(args_list, int));
			i++;
		}
		else if (format[i +1] == 'S')
		{
			put_S(va_arg(args_list, char *));
			i++;
			re_val += (r_val - 1);
		}
		re_val += 1;
	}
	va_end(args_list);
	return (re_val);
}
