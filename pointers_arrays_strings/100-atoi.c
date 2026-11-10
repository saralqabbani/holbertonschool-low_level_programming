#include <limits.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	unsigned int num;
	unsigned int digit;
	unsigned int limit;

	i = 0;
	sign = 1;
	num = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	if (sign < 0)
		limit = (unsigned int)INT_MAX + 1U;
	else
		limit = (unsigned int)INT_MAX;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (num > (limit - digit) / 10U)
			num = limit;
		else
			num = num * 10U + digit;

		i++;
	}

	if (sign < 0)
	{
		if (num == (unsigned int)INT_MAX + 1U)
			return (INT_MIN);
		return (-(int)num);
	}

	return ((int)num);
}
