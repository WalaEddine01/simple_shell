#include "main.h"
/**
 * shexit - handle shell exit
 * @line: a comparission var.
 * Return: Nothing
 */
int shexit(char *line)
{
	if (_strcmp(line, "exit", _strlen("exit")) == 0)
	{
		return (1);
	}
	return (2);
}
