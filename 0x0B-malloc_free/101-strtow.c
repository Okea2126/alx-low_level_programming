#include <stdlib.h>
#include "main.h"
/**
* * count_word - helper function to count the number of words in a string
* * @s: string to evaluate
* *
* * Return: number of words
* */
int count_word(char *s)
{
int flame, n, w;
flame = 0;
w = 0;
for (n = 0; s[n] != '\0'; n++)
{
if (s[n] == ' ')
flame = 0;
else
if (flame == 0)
{
flame = 1;
w++;
}
}
return (w);
}
/**
* **strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
* or NULL (Error)
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, n = 0, start, end;
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (n + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - n;
k++;
n = 0;
}
}
else if (n++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
