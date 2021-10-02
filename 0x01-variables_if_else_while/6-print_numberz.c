#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
float num, new_line;

new_line = '\n';
for (num = '0' ; num <= '9' ; num++)
{
putchar(num);
}
putchar(new_line);

return (0);
}
