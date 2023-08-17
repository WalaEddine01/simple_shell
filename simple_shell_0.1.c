#include "main.h"
/**
 * main - Simple shell
 *
 * Return: 0 or -1
 */
int main(int argc, char *argv[], char *envp[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL;
	size_t s;
	ssize_t read;
	pid_t pid;

	if (argc != 1)
	{
		return (0);
	}
	while (1)
	{
		_puts("$ ");
		line = _getline(line, s, stdin);
		_strtok(line, stk);
		_fork(stk, av, line, envp, argv);
	}
	free(line);
	return (0);
}
