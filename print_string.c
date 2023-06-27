#include "main.h"

/**
 * fn_string - print string
 * @var: the string concerned
 * Return: the number of characters printed
 */

int fn_string(va_list var)
{
	char *s = va_arg(var, char *);
	unsigned int len = 0;
	int count = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
	{
		write(STDOUT_FILENO, &s[len], 1);
		count++;
		len++;
	}

	return (count);
}
