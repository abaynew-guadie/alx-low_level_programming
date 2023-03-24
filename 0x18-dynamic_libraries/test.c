#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
* printf - Prints  chactors
* @format: Print character of the  pointers
*@...:
*exit: EXIT_SUCCESS
*/
int printf(const char *format, ...)
{
write(1, " 10 \n", 17);
write(1, "congratulations, you win the jackpot!\n", 38);
exit(EXIT_SUCCESS);
}
