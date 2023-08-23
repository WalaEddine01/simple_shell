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
	char *stk[10], *line = NULL, *cmd = NULL, *av[] = {NULL};
	int ext, space;

	if (argc < 1)
		return (-1);
	signal(SIGINT, hight);
	while (1)
	{
		enter_cmd();
		line = _getline(line);
		space = test_white_space(line);
		if (space == 1)
			continue;
		ext = shexit(line);
		if (ext == 0)
			continue;
		cmd = _which(line, envp);
		if (cmd == NULL)
		{
			_fork(stk, av, envp, argv);
			continue;
		}
		_strtok(cmd, stk);
		_fork(stk, stk, envp, argv);
	}
	free(cmd);
	free(line);
	return (0);
}
