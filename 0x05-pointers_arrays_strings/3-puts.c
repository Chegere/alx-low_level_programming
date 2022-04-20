#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that  will be changed
 *
 * Return: 0
 */

void _puts(char *str)
{
char *c;
int i;

c = str;

for (i = 0; c[i]; i++)
{
_putchar (c[i]);
}
_putchar('\n');
}
