#include "main.h"


/**
 * n_int - print number of bytes printed
 * @n: Integer to print
 * Return: number of bytes printed
 */
int n_int(int n)
{
	int negC = 0, flag;
	unsigned int i;

	if (n > -10 && n < 10)
		flag = 0;
	if (n >= 0)
		i = n;
	else
	{
		n = -1 * (unsigned int)(n + 1) + 1;
		n = -1;
		negC = 1;
	}
	if (i / 10)
	{
		flag = 1;
		return (1 + n_int(i / 10) + negC);
	}

	if (flag == 0)
		return (negC + 1);
	return (1);
}

/**
 * int_print - Function to the Prints the integer recursively
 * @n: Integer passed
 * Return: 0
 */
int int_print(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -1 * (unsigned int)(n + 1) + 1;
		n = -1;
		my_putchar('-');
	}
	else
	{
		i = n;
	}

	if (i / 10)
		int_print(i / 10);

	my_putchar(i % 10 + '0');
	return (0);
}
/**
 * put_int - function to print integer and return num of byte printed
 * @n: Integer passed
 * Return: Number of byte printed
 */
int put_int(int n)
{
	int_print(n);
	return (n_int(n));
}

