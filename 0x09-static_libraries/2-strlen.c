#include "main.h"
#include <stddef.h>
/**
* _strlen - Returns the length of a string.
* @str: string.
* Return: length.
*/
int  _strlen(char *str)
{
int len = 0;
while (*str++)
len++;
return (len);
}
