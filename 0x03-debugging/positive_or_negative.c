#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  positive_or_negative - Enter point
 *  @n: arg from main function
 *  Return: Always 0 if it completed successfully
*/
void positive_or_negative(int n)
{
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
