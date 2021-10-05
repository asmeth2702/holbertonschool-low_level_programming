#include "main.h"
/**
 * times_table - a function that prints the 9 times table
 *
 * Return - the 9 times table.
 */
void times_table(void)
{
int c, f, r;

for (c = 0 ; c <= 9; c++)
{
for (f = 0; f <= 9; f++)
{
r = (c * f);
if (f != 0)
{
_putchar(',');
_putchar(' ');
}
if (r >= 10)
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (r < 10 && f != 0)
{
_putchar(' ');
_putchar((r % 10) + '0');
}
else
_putchar((r % 10) + '0');
}
_putchar('\n');
}
}
