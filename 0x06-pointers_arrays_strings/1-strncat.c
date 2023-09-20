#include "main.h"

/**
  * _strncat  - the main function
  *
  * @n: Function parameter
  *
  * @src: Function parameter
  *
  * @dest: Function parammeter
  *
  * Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int s, p;

	s = 0;
	p = 0;

	while (dest[p] != '\0')
	{
	s++;
	}
	while (p < n && src[p] != '\0')
	{
	dest[s] = src[p];
	s++;
	p++;
	}
	dest[s] = '\0';
	return (dest);
}
