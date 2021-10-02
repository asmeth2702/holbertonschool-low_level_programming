#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int alfa, new_line;

new_line = '\n';
for (alfa = 'z' ; alfa >= 'a' ; alfa--)
{
putchar(alfa);
}
putchar(new_line);

return (0);
}
