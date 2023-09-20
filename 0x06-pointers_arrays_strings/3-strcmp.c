#include "main.h"

/**
  * _strcmp - The main function
  *
  * @s1: Function parameter
  *
  * @s2: Function parameter
  *
  * Return: s1, s2
  */
int _strcmp(char *s1, char *s2)
{
int s = 0;

while (s1[s] != '\0' && s2[s] != '\0')
{
	if (s1[s] != s2[s])
	{
	return (s1[s] - s2[s]);
	}
	s++;
	}
	return (0);
}

