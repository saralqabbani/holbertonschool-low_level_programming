#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: Name to print
 * @f: Pointer to the printing function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
