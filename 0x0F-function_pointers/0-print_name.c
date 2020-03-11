#include "function_pointers.h"

/**
 * print_name - Assing name pointer like argument of f
 * @name: String poiter
 * @f: Function pointer
 * Return: -
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
