#include "main.h"
/**
 * exe - exe function
 * @stk: stk
 * @envp: enviroment path
 * @argv: argument vector
 * @line: string line
 * Return: void
*/
void exe(char **stk, char *envp[], char *argv[], char *line)
{
	char *cmd = NULL;

	cmd = _which(line, envp);
	if (cmd == NULL)
	{
		return;
	}
	_strtok(cmd, stk);
	_fork(stk, stk, envp, argv);
	free(cmd);
}
