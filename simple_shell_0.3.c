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
	char *stk[10], *line = NULL, *cmd = NULL;
	int ext, space;

	if (argc < 1)
		return (-1);
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
		if (ext == 1)
			break;
		else if (ext == 0)
			continue;
		cmd = _which(line, environ);
		if (cmd == NULL)
		{
			free(line);
			_fork(stk, stk, environ, argv);
			continue;
		}
		_strtok(cmd, stk);
		_fork(stk, stk, environ, argv);
		free(cmd);
	}
	free(line);
	return (0);
}
