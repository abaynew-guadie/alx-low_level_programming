#include <stdio.h>
/**
 * main - Print a number for putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
