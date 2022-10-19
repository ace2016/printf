#include "main.h"

/**
 * prstr - print string
 * @valist: valist
 * @format: format str
 * Return: number str for print
 */

int prstr(char *format, va_list valist)
{
	char *string = va_arg(valist, char *);
	int sao;
	(void)format;

	if (string == NULL)
		string = "(null)";
	sao = _puts(string);
	return (sao);
}
