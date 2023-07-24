#include "main.h"

/**
 * my_putchar - Function that prints a character
 * @c: Character passed
 * Return: The character passed
 */

int my_putchar(char c)

{
	return (write(1, &c, 1));
}
