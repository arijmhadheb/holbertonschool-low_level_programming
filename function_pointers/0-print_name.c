#include "function_pointers.h"
/**
 * print_name - Print a name from a function pointer
 * @name: a string
 * @f: function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
