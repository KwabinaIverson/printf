#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * fn_percent - print percent
 * @spe: the specifier
 * Return: the number of characters printed
 */

int fn_percent(va_list spe)
{
	char c = va_arg(spe, int);

	write(STDOUT_FILENO, &c, 1);
	return (1);
}
