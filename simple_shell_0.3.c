#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * @envp: array of strings environments
 * Return: 0 or -1
 */
int main(int argc, char *argv[], char **envp)
{
	char *stk[10], *av[] = {NULL}, *line = NULL, *cmd = NULL;
	int ext, space, i = 0;

	if (argc < 1)
		return (-1);
	signal(SIGINT, hight);
	while (1)
	{
		enter_cmd();
		line = _getline(line);
		if (line == NULL && i == 0)
		{
			_puts("\n");
			break;
		}
		if (i == 1)
			break;
		space = test_white_space(line);
		if (space == 1)
			continue;
		ext = shexit(line);
		if (ext == 0)
			continue;
		cmd = _which(line, envp);
		if (cmd == NULL)
		{
			free(line);
			_fork(stk, av, environ, argv);
			continue;
		}
		_strtok(cmd, stk);
		_fork(stk, stk, environ, argv);
		free(cmd);
		free(line);
		i++;
	}
	return (0);
}
