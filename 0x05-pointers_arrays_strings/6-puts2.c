#include "main.h"
/**
* puts2 - Prints one char out of two of a strin
*@s str at puts2 containing characters.
*/
void puts2(char *str)
{
int i, len = 0;
while (str[i++])
len++;
for (i = 0; i < len; i += 2)
_putchar(str[i]);
_putchar('\n');
}
