#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  positive_or_negative - Enter number like positive negative and zero
 *  @n: arg from main function
 *  NO description 
 *
 *  Return: Always 0 if it completed successfully
*/
void positive_or_negativent(int i)
{ 
int n = i;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return(0);
}
