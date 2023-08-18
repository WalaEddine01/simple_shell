#include "main.h"
/**
 * main - Simple shell
 *
 * Return: 0 or -1
 */
int main(int argc, char *argv[], char *envp[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL;

	if (argc != 1)
	{
		return (0);
	}
	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		_strtok(line, stk);
		_fork(stk, av, envp, argv);
	}
	free(line);
	return (0);
}
