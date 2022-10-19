#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 *
 * Return: int
 */

typedef struct print
{
	char *t;
	int (*f)(char *format, va_list);
} printtype;

int _putchar(char c);
int _puts(char *string);
int prc(char *format, va_list);
int prstr(char *format, va_list);
int (*specifier(char *format))(char *format, va_list);
int _printf(char *format, ...);
int printg(char *format, va_list valist);
int intg(int num);
int cord(int num);
int _abs(int num);
int prpercnt(char *format, va_list valist);
int prhex(char *format, va_list);
int prHEX(char *format, va_list);
int proct(char *format, va_list);
int prunsign(char *format, va_list);
int printadr(char *format, va_list);
int print_R(char *format, va_list);
int print_S(char *format, va_list);
int print_b(char *format, va_list);

#endif /* MAIN_H */
