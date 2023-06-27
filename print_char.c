#include "main.h"

/**
 * fn_char - write characters
 * @var: variable
 * Return: number of characters printed
 */

int fn_char(va_list var)
{
	int count = 0;
	char c = va_arg(var, int);

	write(STDOUT_FILENO, &c, 1);
	count++;
	return (count);
}
