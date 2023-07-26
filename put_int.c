#include "main.h"


/**
 * n_int - print number of bytes printed
 * @n: Integer to print
 * Return: number of bytes printed
 */
int n_int(int n)
{
	int negC = 0;
	unsigned int i;
	int digitCount = 0;

	if (n < 0)
	{
		negC = 1;
	}
	else
	{
		i = n;
	}
	if (i == 0)
	{
		digitCount = 1;
	}
	else
	{
		while (i != 0)
		{
			i /= 10;
			digitCount++;
		}
	}
	return (negC + digitCount);
}

/**
 * int_print - Function to the Prints the integer recursively
 * @n: Integer passed
 * Return: 0
 */
int int_print(int n)
{
	int len = 0;

	if (n == INT_MIN)
	{
		len += put_str("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		n = -n;
		len += my_putchar('-');
	}

	if (n / 10)
		len += int_print(n / 10);

	my_putchar(n % 10 + '0');
	len++;
	return (len);
}
