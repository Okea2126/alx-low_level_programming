#include <stdio.h>
#include "main.h"
/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int t, d, n, pen, f, digit;
t = 0;
d = 0;
n = 0;
pen = 0;
f = 0;
digit = 0;
while (s[pen] != '\0')
pen++;
while (t < pen && f == 0)
{
if (s[t] == '-')
++d;
if (s[t] >= '0' && s[t] <= '9')
{
digit = s[t] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[t + 1] < '0' || s[t + 1] > '9')
break;
f = 0;
}
t++;
}
if (f == 0)
return (0);
return (n);
}
/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, tum1, tum2;
if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}
tum1 = _atoi(argv[1]);
tum2 = _atoi(argv[2]);
result = tum1 *tum2;
printf("%d\n", result);
return (0);
}
