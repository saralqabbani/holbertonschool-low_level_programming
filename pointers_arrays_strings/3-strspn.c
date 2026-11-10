#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The accepted characters.
 *
 * Return: Number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int found;
	unsigned int i;
	unsigned int j;

	count = 0;
	i = 0;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
			j++;
		}

		if (found == 0)
			break;

		count++;
		i++;
	}

	return (count);
}
