#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by @s
 * @s: A pointer to the memory area to be filled
 * @b: The char to fill the memory area
 * @n: The number of bytes to be filled
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
