#include "main.h"
/**
 * print_reverse - the function name
 * @s: function parameter
 *
 */

void print_rev(char *s)
{
int i;
int total = 0;

for (i = 0; s[i]!= '\0'; i++)
	total++;
for (i = total - 1; i >= 0; i--)
putchar (s[i]);
putchar ('\0');
}
