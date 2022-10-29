#include "main.h"
/**
* puts_half - half of a string.
*puts_half the function method
*@str: The string to be encoded.
*/
void puts_half(char *str)
{
int i = 0,
len = 0, j;
while (str[i++])
len++;
if ((len % 2) == 0)
j = len / 2;
else
j = (len + 1) / 2;
for (i = j; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
