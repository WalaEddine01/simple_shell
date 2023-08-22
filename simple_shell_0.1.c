#include "main.h"
/**
 * main - Simple shell
 * @argc: number of args
 * @argv: array of strings
 * @envp: array of strings environments
 * Return: 0 or -1
 */
int main(int argc, char *argv[], char *envp[])
{
	char *stk[10], *av[] = {NULL}, *line = NULL;
<<<<<<< HEAD
	int space;

=======
	int space, exit;
  
>>>>>>> bbf836f2d5ff4bed7a313f9ad1fceb9a58967444
	if (argc != 1)
	{
		return (0);
	}
	while (1)
	{
		_puts("$ ");
		line = _getline(line);
		space = test_white_space(line);
		if (space == 1)
		{
			stk[0] = "\n";
			continue;
		}
<<<<<<< HEAD
=======
		exit = shexit(line);
		if (exit == 0)
		{
			stk[0] = "\n";
			free(line);
			continue;
		}
>>>>>>> bbf836f2d5ff4bed7a313f9ad1fceb9a58967444
		_strtok(line, stk);
		_fork2(stk, av, envp, argv);
	}
	free(line);
	return (0);
}
