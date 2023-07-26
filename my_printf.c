#include "main.h"
/**
 * _printf - Function that print string
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
	if (format == NULL)
		return (-1);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
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
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				re_val += int_print(va_arg(args_list, int));
				i++;
			}
			else if (format[i + 1] == 'S')
			{
				put_S(va_arg(args_list, char *));
				i++;
				re_val += (r_val - 1);
			}
			else
			{
				my_putchar(format[i]);
				my_putchar(format[i + 1]);
				i++;
				re_val += 2;
			}
		}
		else
		{
			my_putchar(va_arg(args_list, int));
			re_val += 1;
		}
	}
	va_end(args_list);
	return (re_val);
}
