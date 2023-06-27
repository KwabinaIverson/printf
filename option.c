#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * get_spe - selects the correct specifier
 * @spe: the specifier
 * Return: a pointer to the function correstponding
 */

int (*get_spe(const char *format))(va_list)
{
	specifier spec[] = {
		{"c", fn_char},
		{"s", fn_string},
		{NULL, NULL}
	};
	int i = 0;

	while (spec[i].spec != NULL && (*spec[i].spec != *format))
		i++;
	return (spec[i].fn);
}
