#include "main.h"
/**
 * _getline - write a line in lineptr
 * @lineptr: line pointer
 * Return: None
 */
char *_getline(char *lineptr)
{
	char *line = NULL;
	ssize_t reada;
	size_t s;

	reada = getline(&line, &s, stdin);
	if (reada < 0 && high.interactive_mod)
	{
		free(line);
		free(lineptr);
		write(STDERR_FILENO, "\n", 1);
		exit(1);
	}
	if (reada == -1)
	{
		free(line);
		return (NULL);
	}
	if (line[reada - 1] == '\n')
	{
		line[reada - 1] = '\0';
	}
	lineptr = malloc(sizeof(char) * (_strlen(line) + 1));
	if (lineptr == NULL)
	{
		perror("malloc");
		free(line);
		free(lineptr);
		exit(1);
	}
	_strcpy(lineptr, line);
	free(line);
	return (lineptr);
}
