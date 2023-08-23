#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 or -1
 */
int main(int argc, char *argv[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL;
	(void)argc;

	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		_strtok(line, stk);
		_fork2(stk, av, argv);
	}
	free(line);
	return (0);
}
