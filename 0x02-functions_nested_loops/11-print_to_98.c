#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural to 98.
 * @n: the number
 * Return - result.
 */
void print_to_98(int n)
{
if (n < 98)
{
for (n = n ; n < 98 ; n++)
printf("%d, ", n);
printf("98\n");
}
else if (n > 98)
{
for (n = n ; n > 98 ; n--)
printf("%d, ", n);
printf("98\n");
}
else
printf("98\n");
}
