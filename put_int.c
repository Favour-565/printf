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
		return (0);
	n = x / 10;
	re_val += 1;
	put_int(n);
	myputchar(x % 10 + '0');

	return (re_val);
}
