#include "main.h"

/**
 * proct - print hexadecimal
 * @format: format to print hex
 * @valist: list that contains hex
 * Return: number
 */

int proct(char *format, va_list valist)
{
	unsigned int num = va_arg(valist, unsigned int);
	unsigned int j;
	char *oct;
	int i1, i2 = 0, z = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (j = num; j != 0; i2++)
	{
		j = j / 8;
	}
	oct = malloc(i2);
	if (!oct)
		return (-1);
	for (i1 = i2 - 1; i1 >= 0; i1--)
	{
		oct[i1] = num % 8 + '0';
		num = num / 8;
	}
	for (i1 = 0; i1 < 12 && oct[i1] == '0'; i1++)
		;
	for (; i1 < i2; i1++)
	{
		_putchar(oct[i1]);
		z++;
	}
	free(oct);
	return (z);
}
