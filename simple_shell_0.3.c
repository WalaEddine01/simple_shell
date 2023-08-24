#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * @envp: array of strings environments
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	char *stk[10], *line = NULL, *cmd = NULL, *av[] = {NULL};
	int ext, space;
	(void)argc;

	signal(SIGINT, hight);
	while (1)
	{
		enter_cmd();
		line = _getline(line);
		if (line == NULL)
			break;
		space = test_white_space(line);
		if (space == 1)
			continue;
		ext = shexit(line);
		if (ext == 0)
		{
			free(cmd);
			free(cmd);
			exit(0);
		}
		cmd = _which(line, environ);
		if (cmd == NULL)
		{
			_fork(stk, av, environ, argv);
			continue;
		}
		_strtok(cmd, stk);
		_fork(stk, stk, environ, argv);
		free(cmd);
	}
	free(line);
	return (0);
}
