
#include "main.h"

/**
 * is_separator - Checks if a character separates words.
 * @c: The character to check.
 *
 * Return: 1 if separator, 0 otherwise.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	i = 0;
	while (separators[i] != '\0')
	{
		if (c == separators[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to capitalize.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && str[i + 1] >= 'a'
		    && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
