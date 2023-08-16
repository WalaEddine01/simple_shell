#include "main.h"
/**
 * main - Simple shell
 *
 * Return: 0 or -1
 */
int main(void)
{
	char *stk[10], *av[] = {NULL}, *line = NULL, *token;
	size_t s;
	int a, i = 0, x, read = 0;
	pid_t pid;

	while (1)
	{
		printf("$ ");
		read = getline(&line, &s, stdin);
		if (read != -1)
		{
			if (line[read - 1] == '\n')
				line[read - 1] = '\0';
		}
		else
			return (0);
		token = strtok(line, " ");
		while (token)
		{
			stk[i] = token;
			token = strtok(NULL, " ");
			i++;
		}
		pid = fork();
		if (pid == 0)
		{
			x = execve(stk[0], av, NULL);
			if (x == -1)
				return (0);
		}
		else if (pid < 0)
		{
			perror("fork error");
			return (-1);
		}
		else
			wait(&a);
	}
	free(line);
	return (0);
}
