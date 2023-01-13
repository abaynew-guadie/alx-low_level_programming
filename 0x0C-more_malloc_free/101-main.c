#include <stdio.h>
#include <stdlib.h>
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @len_1: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @len_2: length of factor 2
 * @len_r: length of result arrays
 *
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int len_1, char *num2, int len_2, int len_r)
{
int i = 0, i1 = len_1 - 1;
int i2, product, carry, digit, *mul_result, *sum_result;
sum_result = _calloc(sizeof(int), (len_r));
while (i < len_1)
{
mul_result = _calloc(sizeof(int), len_r);
i2 = len_2 - 1, digit = (len_r - 1 - i);
if (!is_digit(num1[i1]))
return (NULL);
carry = 0;
while (i2 >= 0)
{
if (!is_digit(num2[i2]))
return (NULL);
product = (num1[i1] - '0') * (num2[i2] - '0');
product += carry;
mul_result[digit] += product % 10;
carry = product / 10;
digit--, i2--;
}
add_arrays(mul_result, sum_result, len_r);
free(mul_result);
i++, i1--;
}
return (sum_result);
}
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 *
 * Return: 0, Success
 */
int main(int argc, char **argv)

{
int len_1, len_2, len_r, temp, *sum_result;
char *num1, *num2;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
len_1 = str_len(argv[1]), len_2 = str_len(argv[2]);
len_r = len_1 + len_2;
if (len_1 < len_2)
num1 = argv[1], num2 = argv[2];
else
{
num1 = argv[2], num2 = argv[1];
temp = len_2, len_2 = len_1, len_1 = temp;
}
sum_result = multiply(num1, len_1, num2, len_2, len_r);
if (sum_result == NULL)
exit(98);
print_me(sum_result, len_r);
return (0);
}
