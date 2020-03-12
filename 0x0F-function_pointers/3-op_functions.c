#include "function_pointers.h"

/**
 * op_add - Add a with b.
 * @a: First number.
 * @b: Second number.
 * Return: int with result.
 */
int op_add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}

/**
 * op_sub - Diference between a and b.
 * @a: First number.
 * @b: Second number.
 * Return: int with result.
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}

/**
 * op_mul - Mul a with b.
 * @a: First number.
 * @b: Second number.
 * Return: int with result.
 */
int op_mul(int a, int b)
{
	int r;

	r = a * b;
	return (r);
}

/**
 * op_div - Div a with b
 * @a: First number.
 * @b: Second number.
 * Return: int with result.
 */
int op_div(int a, int b)
{
	int r;

	r = a / b;
	return (r);
}

/**
 * op_mod - Mod a with b.
 * @a: First number.
 * @b: Second number.
 * Return: int with result.
 */
int op_mod(int a, int b)
{
	int r;

	r = a % b;
	return (r);
}
