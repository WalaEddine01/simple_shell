#include "main.h"
/**
 * _fork - fork and execve
 * @stk: array of string
 * @av: array of string
 * @line: line to free
 * Return: None
*/
void _fork(char *stk[], char *av[], char *line)
{
	char **environ;
	pid_t pid;
	int a;

	pid = fork();
	if (pid == 0)
	{
		execve(stk[0], av, environ);
		perror("execve");
		free(line);
		exit(1);
	}
	else if (pid < 0)
	{
		perror("fork");
		free(line);
		exit(1);
	}
	else
	{
		wait(&a);
	}
}
