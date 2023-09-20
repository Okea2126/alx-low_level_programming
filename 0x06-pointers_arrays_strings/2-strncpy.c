#include "main.h"

/**
  * _strncpy - The main function of the code
  *
  * @src: Function parameter
  *
  * @dest: Function parameter
  *
  * @n: Function parameter
  *
  * Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int s = 0;

	while (s < n && src[s] != '\0')
	{
	dest[s] = src[s];
	s++;
	}
	while  (s < n)
	{
	dest[s] = '\0';
	s++;
	}
	return (dest);
}
