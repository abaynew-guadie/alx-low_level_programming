
#include "main.h"
/**
* 5-rev_string - Reverses a string.
* string to be reserved.0
* rev_string  to displays
*/
void rev_string(char *s)
{
int i = 0, len = 0; 
char tmp;
while (s[i++])  
len++;
for (i = len - 1; i >= len / 2; i--)
{
tmp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = tmp;
}
}
