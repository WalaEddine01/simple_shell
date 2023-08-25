#include "main.h"
/**
 * main - Simple shell
 * @argv: array of strings
 * @argc: number of arguments
 * @envp: array of strings environments
 * Return: 0 or -1
 */
int main(int argc __attribute__((unused)), char *argv[], char **envp)
{
	char *stk[10], *line = NULL, *cmd = NULL, *av[] = {NULL};
	int ext, space;

	signal(SIGINT, hight);
	while (1)
	{
		enter_cmd();
		line = _getline(line);
		if (line == NULL)
			break;
		if (line[0] == '#')
			continue;
		line = strtok(line, "#");
		if (_strchr(line, ';') != NULL || line[0] == ';')
		{
			simicolen(line, envp, argv);
			continue;
		}
		space = test_white_space(line);
		if (space == 1)
			continue;
		ext = shexit(line);
		if (ext == 0)
		{
			free(cmd);
			free(line);
			exit(0);
		}
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
