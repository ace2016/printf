#include "main.h"

/**
 * _puts - prints a string new line
 * @string: string to be inputed
 * Return: count of string.
 */

int _puts(char *string)
{
	int sao = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		sao++;
	}
	return (sao);
}
