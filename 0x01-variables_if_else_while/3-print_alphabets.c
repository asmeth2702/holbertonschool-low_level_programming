#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char min, may;

for (min = 'a' ; min <= 'z' ; min++)
{
putchar(min);
}
for (may = 'A' ; may <= 'Z' ; may++)
{
putchar(may);
}
putchar(10);

return (0);
}
