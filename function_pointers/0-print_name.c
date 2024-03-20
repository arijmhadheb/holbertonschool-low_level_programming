#include "function_pointers.h"
/**
 * print_name - a function that print a name.
 * @name: name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
