#include "main.h"

/**
  * _strspn - main function
  *
  * @s: Function parameter
  *
  * @accept: Function parameter
  *
  * Return: Always 0.
  */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int _strspn(char *s, char *accept);
	unsigned int i = 0;
	int p;

	while (*s)
	{
	for (p = 0; accept[p]; p++)
	{
	if (*s == accept[p])
	{
	i++;
	break;
	}
	else if (accept[p + 1] == '\0')
	return (i);
	}
	s++;
	}
	return (i);
}

