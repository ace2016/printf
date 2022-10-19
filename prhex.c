#include "main.h"

/**
 * prhex - prints hexadecimal
 * @format: format to print hex
 * @valist: list that contains hex
 * Return: number
 */

int prhex(char *format, va_list valist)
{
	unsigned int num1 = va_arg(valist, unsigned int);
	unsigned int num2;
	int i1, i2, copy, z = 0;
	char *numhex;

	(void)format;

	if (num1 == 0)
		return (_putchar('0'));
	for (num2 = num1; num2 != 0; z++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(z);
	for (i1 = 0; num1 != 0; i1++)
	{
		copy = num1 % 16;
		if (copy < 10)
			numhex[i1] = copy + '0';
		else
			numhex[i1] = copy - 10 + 'a';
		num1 = num1 / 16;
	}
	for (i2 = i1 - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (z);
}

/**
 * prHEX - prints hexadecimal
 * @format: format to print hexadecimal
 * @valist: list that contains the hex
 * Return: number of printed digits
 */

int prHEX(char *format, va_list valist)
{
	unsigned int NUM1 = va_arg(valist, unsigned int);
	unsigned int NUM2;
	int I1, I2, COPY, Z = 0;
	char *NUMHEX;

	(void)format;

	if (NUM1 == 0)
		return (_putchar('0'));
	for (NUM2 = NUM1; NUM2 != 0; Z++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(Z);
	for (I1 = 0; NUM1 != 0; I1++)
	{
		COPY = NUM1 % 16;
		if (COPY < 10)
			NUMHEX[I1] = COPY + '0';
		else
			NUMHEX[I1] = COPY - 10 + 'A';
		NUM1 = NUM1 / 16;
	}
	for (I2 = I1 - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (Z);
}
