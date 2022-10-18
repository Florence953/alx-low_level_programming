#include <stdio.h>

/**
 * main - prints out quote in std error
 *
 * Return: 1 if succesful
 */
int main(void)
{

	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);

	return (1);
}
