#include "main.h"

/**
  * _strchr - main function
  *
  * @s: Function parameter
  *
  * @c: Function parameter
  *
  * Return: Always o.
  */
char *_strchr(char *s, char c)
{
	int p;

	for (p = 0; s[p] >= '\0'; p++)
	{
	if (s[p] == c)
	return (s + p);
	}
	return (0);
}
