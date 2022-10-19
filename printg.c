#include "main.h"

/**
 * _abs - absolute value
 * @num: input
 * Return: value
 */

int _abs(int num)
{
	if (num < 0)
		return (-1 * num);
	else
		return (num);
}

/**
 * cord - counts digits
 * @num: input int
 * Return: number of printed digit
 */

int cord(int num)
{
	int counter = 0;
	int num2 = num;

	if (num <= 0)
		counter += 1;

	while (_abs(num2) != 0)
	{
		num2 = num2 / 10;
		counter++;
	}
	return (counter);
}

/**
 * intg - prints integer
 * @num: input int
 * Return: number of digit printed
 */

int intg(int num)
{
	unsigned int unint;
	int counter;

	counter = cord(num);

	if (num < 0)
	{
		_putchar('-');
		unint = -num;
	}
	else
		unint = num;

	if (unint >= 10)
		intg(unint / 10);
	_putchar(unint % 10 + '0');

	return (counter);
}

/**
 * printg - print number
 * @format: format to print number
 * @valist: list of number to print
 * Return: number of digit printed
 */

int printg(char *format, va_list valist)
{
	int num = va_arg(valist, int);
	int numeri;
	(void)format;

	numeri = intg(num);

	return (numeri);
}
