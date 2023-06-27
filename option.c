#include "main.h"

/**
 * get_spe - selects the correct specifier
 * @format: the character to compare
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

	while (spec[i].spec != NULL && (*(spec[i].spec) != *format))
		i++;
	return (spec[i].fn);
}
