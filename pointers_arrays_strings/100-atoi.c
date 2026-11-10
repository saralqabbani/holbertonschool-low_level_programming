#include <limits.h>
#include "main.h"

/**
 * get_number - Gets the number from a string.
 * @s: The string.
 * @i: Current index.
 * @limit: Maximum allowed number.
 *
 * Return: The converted unsigned number.
 */
static unsigned int get_number(char *s, int *i, unsigned int limit)
{
	unsigned int num, digit;

	num = 0;
	while (s[*i] >= '0' && s[*i] <= '9')
	{
		digit = s[*i] - '0';
		if (num > (limit - digit) / 10U)
			num = limit;
		else
			num = num * 10U + digit;
		(*i)++;
	}
	return (num);
}

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i, sign;
	unsigned int num, limit;

	i = 0;
	sign = 1;
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	limit = (unsigned int)INT_MAX;
	if (sign < 0)
		limit++;
	num = get_number(s, &i, limit);
	if (sign < 0)
	{
		if (num == (unsigned int)INT_MAX + 1U)
			return (INT_MIN);
		return (-(int)num);
	}
	return ((int)num);
}
