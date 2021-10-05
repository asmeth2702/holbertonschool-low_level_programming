#include "main.h"
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
char *str;
int p;

str = "_putchar";
for (p = 0; p < 8; p++)
{
_putchar(str[p]);
}
_putchar('\n');

return (0);
}
