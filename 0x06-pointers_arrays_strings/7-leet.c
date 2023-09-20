#include "main.h"
#include <stdio.h>
/**
  *leet - main function
  *
  * @n: Function parameter
  *
  *Return: value of n
 */

char *leet(char *n)
{
	int s, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (s = 0; n[s] != '\0'; s++)
	{
	for (p = 0; p < 10; p++)
	{
	if (n[s] == s1[p])
	{
	[s] = s2[p];
	}
	}
	}
	return (n);
}
