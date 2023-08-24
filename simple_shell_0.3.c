#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	char *stk[10], *line = NULL, *av[] = {NULL};
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
			exit(0);
		if (line[0] == '#')
			continue;
		line = strtok(line, "#");
		if (_strchr(line, ';') != NULL || line[0] == ';')
		{
			simicolen(line, environ, argv);
			continue;
		}
		exe(stk, av, environ, argv, line);
	}
	free(line);
	return (0);
}
