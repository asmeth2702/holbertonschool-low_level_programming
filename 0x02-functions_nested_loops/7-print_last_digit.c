#include "main.h"
/**
 * print_last_digit - a function that prints the last digit
 * @n: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int un;

un = (n % 10);
if (un < 0)
{
un *= -1;
}
_putchar(un + '0');
return (un);
}
