#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * _printf - prints characters checking specifiers
 * @format: the unknown variable
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list var;
	int count = 0, i = 0;
	int (*fn)(va_list);


	va_start(var, format);
	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += write(1, &format[i], 1);
			i++;
		}
		if (format[i] == '%')
		{
			if (format[i+1] == '%')
			{
				i += 2;
				count += write(1, "%%", 1);
				continue;
			}

			fn = get_spe(&format[i+1]);

			if (fn != NULL)
			{
				count += fn(var);
				i += 2;
				continue;
			}
			else
				break;
		}
	}
	va_end(var);
	return (count);
}
