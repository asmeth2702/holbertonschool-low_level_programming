#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char alfa, new_line;

new_line = '\n';
for (alfa = 'a' ; alfa <= 'z' ;)
{
if (alfa == 'e' || alfa == 'q')
alfa++;
else
{
putchar(alfa);
alfa++;
}
}
putchar(new_line);

return (0);
}
