#include "main.h"
/**
 * print_alphabet - a funtion that prints the alphabet, in lowercase.
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
int a;

for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
