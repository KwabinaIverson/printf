#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary format
 * @arg: The argument to print (unsigned int)
 *
 * Return: The number of characters printed
 */
int print_binary(va_list arg)
{
	unsigned int num = va_arg(arg, unsigned int);
	int count = 0, i;
	char binary[32];

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	for (i = 0; num > 0; i++)
	{
		binary[i] = (num % 2) + '0';
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
		count += _putchar(binary[i]);
	return (count);
}
