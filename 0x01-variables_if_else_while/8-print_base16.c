#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int num, new_line;
char *str = "0123456789abcdef";  

new_line = '\n';
for (num = 0 ; num <= 15 ; num++)
{
putchar(str[num]);
}
putchar(new_line);

return (0);
}
