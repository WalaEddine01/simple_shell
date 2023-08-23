#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	char *stk[10], *av[] = {" ", NULL}, *line = NULL;
	int space;
	(void)argc;

	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		space = test_white_space(line);
		if (space == 1)
			continue;
		_strtok(line, stk);
		_fork2(stk, av, argv);
	}
	free(line);
	return (0);
}
