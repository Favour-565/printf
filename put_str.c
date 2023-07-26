#include "main.h"


/**
 * put_str - Function that prints string
 * @str: String passed
 * Return: Number of string printed
 */

int put_str(char *str)
{
	int i = 0;
	int re_val = 0;

	if (str == NULL)
	{
		myPuts("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		my_putchar(str[i]);
		re_val += 1;
		i++;
	}
	return (re_val);
}
