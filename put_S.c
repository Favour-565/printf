#include "main.h"

/**
 * puts_S - Print sentence
 * @c: Characters passed
 * Return: Printed character
 */

int put_S(char *c)
{
	int x = 0;
	int re_val = 0;

	if (c)
	{
		while(c[x] != '\0')
		{
			if (c[x] >= 32 && c[x] <= 126)
			{
				my_putchar(c[x]);
			}
			else
			{
				my_putchar('\\');
				my_putchar('x');
				my_putchar("0123456789ABCDEF"[c[x] / 16]);
				my_putchar("0123456789ABCDEF"[c[x] % 16]);
				re_val += 4;
			}
			re_val++;
			x++;
		}
	}
	return (re_val);
}
