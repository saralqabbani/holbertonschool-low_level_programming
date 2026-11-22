#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - Prints arguments according to their format
 * @format: String containing argument type identifiers
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	char *str;
	char *separator = "";

	struct type
	{
		char c;
		void (*print)(va_list *);
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while ("cifs"[j])
		{
			if (format[i] == "cifs"[j])
			{
				printf("%s", separator);

				switch (j)
				{
					case 0:
						printf("%c", va_arg(args, int));
						break;
					case 1:
						printf("%d", va_arg(args, int));
						break;
					case 2:
						printf("%f", va_arg(args, double));
						break;
					case 3:
						str = va_arg(args, char *);
						if (str == NULL)
							str = "(nil)";
						printf("%s", str);
						break;
				}
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
