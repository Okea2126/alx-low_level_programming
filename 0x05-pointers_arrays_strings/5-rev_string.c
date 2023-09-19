#include "main.h"
/**
 * rev_string - function name
 * @s: function parameter
 */

void rev_string(char *s)
{
int i;
int total = 0;

for (i = 0; s[i] != '\0'; i++)
total++;
for (i = 0; i < total / 2; i++)
{
char t;
t = s[i];
s[i] = s[total -1 - i];
s[total -1 - i] = t;
}
}
