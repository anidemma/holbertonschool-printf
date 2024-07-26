#include "main.h"
#include <unistd.h>
/**
 * _putchar - Print the parameter
 * @c: Character
 * Return: Always 0
 * -------------------------------------------------------------
 * Source File: _putchar.c - Print the character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
