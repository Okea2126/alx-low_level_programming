#include "main.h"
#include <stdio.h>

/**
 * rot13 - main function
 *
 * @s: String poiner
 *
 * Return: String function
 */

char *rot13(char *s)
{
	int t, r;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (t = 0; s[t] != '\0'; t++)
	{
	for (r = 0; r < 52; r++)
	{
	if (s[t] == data1[r])
	{
	s[t] = datarot[r];
	break;
	}
	}
	}
	return (s);
}
