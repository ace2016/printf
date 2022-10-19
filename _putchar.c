#include <unistd.h>

/**
 * _putchar - print char
 * @c: char
 * Return: 0
 */

int _putchar(char c)
{
	static int sao;
	static char buffer[1024];

	if (c == -1)
	{
		sao = 0;
		return (0);
	}
	if (c == -2 || sao == 1024)
	{
		write(1, buffer, sao);
		sao = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[sao] = c;
		sao++;
		return (1);
	}
	return (0);
}
