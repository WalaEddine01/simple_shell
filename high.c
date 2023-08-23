#include "main.h"
/**
 *hight - it keeps track is interactive mode
 *@m: the signal number
 *Return: nothing
 */

void hight(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
