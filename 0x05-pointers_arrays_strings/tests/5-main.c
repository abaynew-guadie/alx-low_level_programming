#include "main.h"
#include <stdio.h>
/**
* main - check the code
return: Always 0.
*/
int main(void)
{
char s[11] = "My School";
printf("%s\n", s);
rev_string(s);
printf("%s\n", s);
return (0); 
}
