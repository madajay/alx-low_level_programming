#include "main.h"

/**
 * print_last_digit - print last digit of te integer
 * @a: integer argument
 * Return: last digit of a number
 */

int print_last_digit(int a)
{
	if (a < 0)
		a *= -1;
	_putchar('0' + (a % 10));

	return (a % 10);
}
