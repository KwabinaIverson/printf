#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * fn_char - write characters
 * @var: variable
 * Return: number of characters printed
 */

int fn_char(va_list var)
{
	char c = va_arg(var, int);

	write(STDOUT_FILENO, &c, sizeof(char));
	return (1);
}
