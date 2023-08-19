#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * @envp: array of strings environments
 * Return: 0 or -1
 */
int main(int argc, char *argv[], char *envp[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL, *cmd;

	if (argc != 1)
	{
		return (0);
	}
	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		cmd = _which(line, envp);
		if(cmd == NULL)
		{
			_fork(stk, av, envp, argv);
			free(cmd);
			free(line);
			continue;
		}
		_strtok(cmd, stk);
		_fork(stk, av, envp, argv);
		free(cmd);
		free(line);
	}
	return (0);
}
