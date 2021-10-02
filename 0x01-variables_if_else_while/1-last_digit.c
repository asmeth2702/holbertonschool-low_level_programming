#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n, ten;

srand(time(0));
n = rand() - RAND_MAX / 2;
ten = n % 10;
if (ten > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ten);
else if (ten == 0)
printf("Last digit of %d is %d and is 0\n", n, ten);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ten);

return (0);
}
