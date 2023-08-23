#include "main.h"
/**
 * _fork - fork and execve
 * @stk: array of string
 * @av: array of string
 * @argv: array of strings
 * @envp: array of strings environments
 * Return: None
*/
void _fork(char *stk[], char *av[], char *envp[], char *argv[])
{
	pid_t pid;
	int a;

	pid = fork();
	if (pid == 0)
	{
		execve(stk[0], av, envp);
		perror(argv[0]);
		exit(1);
	}
	else if (pid < 0)
	{
		perror("fork");
		exit(1);
	}
	else
	{
		wait(&a);
	}
}
/**
 * _fork2 - fork and execve second version
 * @stk: array of string
 * @av: array of string
 * @argv: array of strings
 * Return: None
*/
void _fork2(char *stk[], char *av[], char *argv[])
{
	pid_t pid;
	int a;

	pid = fork();
	if (pid == 0)
	{
		if (stk[1] != NULL)
		{
			execve("ERROR", av, NULL);
			perror(argv[0]);
			exit(1);
		}
		else
		{
			execve(stk[0], av, environ);
			perror(argv[0]);
			exit(1);
		}
	}
	else if (pid < 0)
	{
		perror("fork");
		exit(1);
	}
	else
	{
		wait(&a);
	}
}
