#include "main.h"

/**
  * print_int - prints an integer value
  * @var: variadic parameter
  *
  * Return: the number of values printed
  */

int fn_int(va_list var)
{
	int n, num, ld;
	int digit, exp, count, val = 1;

	n = va_arg(var, int);
	if (n < 0)
		val = -1;
	ld = n % 10;
	count = 1;
	exp = 1;
	n = n / 10;
	num = n;
	if (val < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		ld = -ld;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			count++;
		}
	}
	_putchar(ld + '0');
	return (count);
}
