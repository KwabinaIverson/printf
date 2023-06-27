#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct spe - a struct spe
 * @spec: the specifiers
 * @f: associated functions
 */

typedef struct spe
{
	char *spec;
	int (*fn)(va_list);
} specifier;

int _printf(const char *format, ...);
int fn_char(va_list);
int fn_string(va_list);
int (*get_spe(const char *format))(va_list);

#endif
