#include "main.h"
/**
 * freebuf - free buffer
 * @buf: buffer
 * Return: void
*/
void freebuf(char **buf)
{
	int i = 0;

	while (buf[i] != NULL)
	{
		buf[i] = NULL;
		i++;
	}
}
