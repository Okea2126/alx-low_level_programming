#include "main.h"

/**
  *_strcat - main function of the prototype
  *
  * @src: Concatenation parameter
  *
  * @dest: Concatenation parameter
  *
  * Return: dest
  */

char *_strcat(char *dest, char *src)
{
int s, p;

s = 0;
p = 0;

while (dest[s] != '\0')
{
	s++;
}

while (src[p] != '\0')
{
	dest[s] = src[p];
	s++;
	p++;
}
dest[s] = '\0';
return (dest);
}

