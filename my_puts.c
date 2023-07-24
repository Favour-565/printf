#include "main.h"


/**
 * myPuts - Function that prints a string with a new line
 * @str: String passed
 * Return: Number of string printed
 */

int myPuts(char *str)
{
	int i = 0;
	int re_val = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			my_putchar(str[i]);
			re_val += 1;
			i++;
		}
	}
	my_putchar('\n');
	return (re_val);
}
