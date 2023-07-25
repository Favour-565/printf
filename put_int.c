#include "main.h"

/**
 * put_int - Function that prints integers
 * @x: Integer passed
 * Return: Number of integer printed
 */

int put_int(int x)
{
	int n;
	int re_val = 0;

	if (x == 0)
	{
		my_putchar('0');
		return (1);
	}
	if (x < 0)
	{
		my_putchar('-');
		re_val++;
		x = -x;
	}
	n = x / 10;
	re_val += 1;
	put_int(n);
	my_putchar(x % 10 + '0');

	return (re_val);
}
