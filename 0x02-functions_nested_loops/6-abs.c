#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @abs: integer input
 * Return: absolute value of abs
 */
int _abs(int num_abs)
{
if (num_abs < 0)
num_abs *= -1;
return (num_abs);
}
