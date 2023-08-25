#include "main.h"
/**
 * intToString - convert int to str
 * @num: int num
 * @str: string
 * Return: voiid
 */
void intToString(int num, char *str)
{
	int i = 0, j;
	int isNegative = 0;
	int length;
	char temp;
	int digit;

	if (num == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return;
	}
	if (num < 0)
	{
		isNegative = 1;
		num = -num;
	}
	while (num > 0)
	{
		digit = num % 10;
		str[i++] = digit + '0';
		num /= 10;
	}
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	length = i;
	for (j = 0; j < length / 2; j++)
	{
		temp = str[j];
		str[j] = str[length - j - 1];
		str[length - j - 1] = temp;
	}
}
