#include "main.h"
/**
 * simicolen - detects the simicolens
 * @line: command with simicolen
 * @envp: environement variable
 * @argv: array of strings agument variables
 * Return: Nothing
 */
void simicolen(char *line, char *envp[], char *argv[])
{
	int i = 0, j;
	char *stk2[10], *exe[10];

	stk2[0] = strtok(line, ";");
	if (stk2[0] == NULL)
		return;
	while (stk2[i] != NULL)
	{
		i++;
		stk2[i] = strtok(NULL, ";");
	}
	stk2[i] = NULL;
	i--;
	j = i;
	i = 0;
	while (j >= i)
	{
		stk2[i] = _which(stk2[i], envp);
		if (stk2[i] == NULL)
		{
			_fork(stk2, stk2, envp, argv);
			free(line);
			continue;
		}
		_strtok(stk2[i], exe);
		_fork(exe, exe, envp, argv);
		i++;
	}
}
