#include "main.h"

/**
 * _strlen_recursion - returns the length of string
 * @s: string to be measured
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
int self = 0;
if (*s)
{
self++;
self += _strlen_recursion(s + 1);
}
return (self);
}
