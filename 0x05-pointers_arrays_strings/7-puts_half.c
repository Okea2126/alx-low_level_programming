#include "main.h"
/**
 * puts_half - function name
 * @str: function parameter
 */

void puts_half(char *str)
{
int i;
int n;
int total = 0;
for (i = 0; str[i] != '\0'; i++)
total++;
n = (total - 1) / 2;
for (i = n + 1; str[i] != '\0'; i++)
putchar (str[i]);
putchar ('\n');
}

