#include "main.h"
/**
 * print_alphabet_x10 - a function that prints  * 10 times the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int ax10 = 0, a;

while (ax10 <= 9)
{
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
ax10++;
_putchar('\n');
}
}
