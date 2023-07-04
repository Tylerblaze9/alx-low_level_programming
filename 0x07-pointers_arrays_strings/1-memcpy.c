#include "main.h"
#include <stdio.h>
/**
** _memcpy - Copies n bytes from memory area src to memory area dest
** @dest: Pointer to the destination memory area
** @src: Pointer to the source memory area
** @n: Number of bytes to copy
** Descript: This function copies n bytes from the memory area pointed to by
** src to the memory area pointed to by dest. It returns a pointer
** to the destination memory area.
** Return: Pointer to the destination memory area (dest)
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
