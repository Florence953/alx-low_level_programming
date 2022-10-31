#include <unistd.h>

/**
 * _putchar - write the character c to std output 
 * @c: character to be printed 
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
