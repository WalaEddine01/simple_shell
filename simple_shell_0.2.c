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
	char *stk[10], *line = NULL;

	if (argc != 1)
	{
		return (0);
	}
	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		_strtok(line, stk);
		if (stk[1] != NULL)
			_fork(stk, stk, envp, argv);
		else
			_fork2(stk, stk, envp, argv);
	}
	free(line);
	return (0);
