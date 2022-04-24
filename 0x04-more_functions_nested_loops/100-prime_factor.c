#include <stdio.h>

/**
 * main - prime factors of 612852475143
 *
 * Return: int
 */

int main(void)
{
unsigned long n, i, max;
  
n = 612852475143;
max = 1;
  
for (i = 3; i <= n; += 2)
{
while (n % 1 == 0)
{
max = n;
n = n / i;
}
}
printf("%lu\n", main);
return (0);
}
