#include "main.h"

/**
 * clear_bit - the value sets of a given bit to 0
 * @n: the pointer to the numb to change
 * @index: the index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
