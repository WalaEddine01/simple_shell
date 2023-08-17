#include "main.h"
/**
 * _getline - write a line in lineptr
 * @lineptr: line pointer
 * @s: s size of line
 * @stream: stream of line to read
 * Return: None
 */
char *_getline(char *lineptr, size_t s, FILE *stream)
{
	char *line = NULL;
	ssize_t read;

	read = getline(&line, &s, stream);
	if (read == -1)
	{
		perror("getline");
		exit(1);
	}
	if (line[read - 1] == '\n')
	{
		line[read - 1] = '\0';
	}
	lineptr = line;
	return (lineptr);
}
