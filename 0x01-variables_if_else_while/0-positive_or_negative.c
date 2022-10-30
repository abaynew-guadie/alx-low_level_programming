/**
* File: 0-positive_or_negative.c
* Auth: Abaynew G
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main entry point
* Prints a random number and states whether is positive, negative,
* Return: Always 0.
*/
int main(void)
{
int n;
rand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
