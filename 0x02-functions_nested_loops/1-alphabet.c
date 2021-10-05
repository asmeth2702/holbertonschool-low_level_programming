#include "main.h"
/**
 *_putchar - writes the character c to stdout
 *print_alphabet - Print alphabet
 *
 *Return: Always 0 (success)
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
