#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - prints characters checking specifiers
 * @format: the unknown variable
 * Return: the number of characters printed
 */

int _print(const char *format, ...)
{
	va_list var;
	int count = 0;
	int (*fn)(va_list);


	va_start(var, format);
	if (format == NULL)
		return (-1);

	for (; format; format++)
	{
		if (*format != '%')
		{
			count++;
			write(STDOUT_FILENO, format, 1);
		}
		if (*format == '%')
		{
			fn = get_spe(format++);
			if (fn != NULL)
				count += fn(var);
		}
		else
			break;
	}
	va_end(var);
	return (count);
}
