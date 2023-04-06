#include "main.h"

/**
 *main entry point _puts_recursion - print a string.
 * @s: points  to char
 * Return: New line
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
