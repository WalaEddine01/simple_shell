#include "main.h"
/**
 * _getline - getline
 * @lineptr: line pointer
 * @s: s size of line
 * @stream: stream of line to read
 * Return: None
 */
void _getline(char **lineptr, size_t s, FILE *stream)
{
	ssize_t read;
	char *line = NULL;
    
	read = getline(&line, &s, stdin);
	if (read == -1)
	{
		perror("getline");
		free(line);
		exit(1);
	}
	if (line[read - 1] == '\n')
	{
		line[read - 1] = '\0';
	}
	*lineptr = line;
}
