#include "main.h"

/**
 * specifier - selector for type
 * @format: string
 * Description: function loops through struct
 * selector[]
 * Return: pointer
 * printtype selector - Struct
 */

int (*specifier(char *format))(char *format, va_list)
{
	int i;

	printtype selector[] = {
		{"%c", prc},
		{"%s", prstr},
		{"%d", printg},
		{"%i", printg},
		{"%%", prpercnt},
		{"%x", prhex},
		{"%X", prHEX},
		{"%o", proct},
		{"%p", printadr},
		{"%R", print_R},
		{"%b", print_b},
		{"%S", print_S},
		{"%u", print_u},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].t; i++)
	{
		if (format[1] == selector[i].t[1])
			return (selector[i].f);
	}
	return (NULL);
}

