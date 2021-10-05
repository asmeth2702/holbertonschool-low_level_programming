#include "main.h"
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
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
