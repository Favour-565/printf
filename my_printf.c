#include "main.h"

/**
 * spec_check - Function to check for format specifires
 * @n: Character to pass
 * @arg_list: Arguements passed
 * Return: Number of character printed
 */

int spec_check(char n, va_list arg_list)
{
	switch (n)
	{
		case 'c':
			return (my_putchar(va_arg(arg_list, int)));
		case 's':
			return (my_putchar(va_arg(arg_list, char *)));
		case '%':
			return (my_putchar(va_arg(arg_list, int)));
		case 'd':
			return (int_print(va_arg(args_list, int)));
		case 'i':
			return (int_print(va_arg(args_list, int)));
		case 'S':
			return (put_S(va_arg(args_list, char *)));
		default:
			return (my_putchar('%') + my_putchar(n));
	}
}


/**
 * _printf - Function that print string
 * @format: First argument passed
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int re_val = 0;
	va_list args_list;

	va_start(args_list, format);
	if (format == NULL)
		return (-1);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
			re_val += speck_check(format[++i], args_list);
		else
		{
			my_putchar(va_arg(arg_list, int));
			re_val += 1;
		}
	}
	va_end(args_list);
	return (re_val);
}
