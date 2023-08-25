#include "main.h"
/**
 * strtok2 - toknize
 * @line: string
 * Return: a pointer tot a new str
 */
char *strtok2(char *line)
{
	char *token;

	token = strtok(line, "#");
	return (token);
}
