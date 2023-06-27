#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
