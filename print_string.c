#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * fn_string - print string
 * @var: the string concerned
 * Return: the number of characters printed
 */

int fn_string(va_list var)
{
	char *s = va_arg(var, char *);
	unsigned int i = 0;
	int count = 0;

	if (s == NULL)
		return (0);

	while (s[i] != '\0')
	{
		count++;
		write(1, &s[i], 1);
	}
	return (count);
}
