#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* positive_or_negative - Prints function  whether is positive, negative
* @i: arg number
* Return: 0
*/
void positive_or_negative(int i)
{
i = rand() - RAND_MAX / 2;
if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
/*return (0);*/
}
