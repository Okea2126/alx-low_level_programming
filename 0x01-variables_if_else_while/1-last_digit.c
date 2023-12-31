#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main -  Entry point
 * Description: checks on the last digit of assigned variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m % 10);
	}

	return (0);
}
