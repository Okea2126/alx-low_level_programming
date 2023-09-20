#include "main.h"

/**
  * reverse_array - The main faunction
  *
  * @a: Function parameter
  *
  * @n: Function parameter
  *
  * Return: Always 0
  */
void reverse_array(int *a, int n)
{
	int s, p;

	for (s = 0; s < n--; s++)
	{
	p = a[s];
	a[s] = a[n];
	a[n] = p;
	}
}

