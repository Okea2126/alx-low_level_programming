#include "main.h"

/**
 * _pow_recursion - retirns the value of x raised by y;
 *@power of y
 * @x: value
 * @y: power
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
