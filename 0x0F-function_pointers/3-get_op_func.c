#include "function_pointers.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * @s: Operator passed as argument to the program
 * @f: Function pointer
 * Return: -
 */

int (*get_op_func(char *s))(int, int);
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
