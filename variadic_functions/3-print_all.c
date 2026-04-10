#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 */
void print_char(va_list ap, char *sep)
{
	printf("%s%c", sep, va_arg(ap, int));
}

/**
 * print_int - prints an int
 */
void print_int(va_list ap, char *sep)
{
	printf("%s%d", sep, va_arg(ap, int));
}

/**
 * print_float - prints a float
 */
void print_float(va_list ap, char *sep)
{
	printf("%s%f", sep, va_arg(ap, double));
}

/**
 * print_string - prints a string
 */
void print_string(va_list ap, char *sep)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s%s", sep, str);
}

/**
 * print_all - prints anything
 * @format: list of types
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	char *sep = "";
	print_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (ops[j].type)
		{
			if (format[i] == ops[j].type[0])
			{
				ops[j].f(ap, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
