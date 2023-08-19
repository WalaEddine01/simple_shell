#include "main.h"
/**
 * _which - find command
 * @command: command to find
 * @env: environement variable
 * Return: full path of command
*/
char *_which(char *command, char **env)
{
	char *path = _getenv("PATH", env);
	char *token;
	char *full_path = NULL;
	struct stat st;

	token = strtok(path, ":");
	while (token != NULL)
	{
		full_path = malloc(_strlen(token) + 1 + _strlen(command) + 1);
		if (full_path == NULL)
		{
			perror("malloc");
			exit(1);
		}
		_strcpy(full_path, token);
		_strcat(full_path, "/");
		_strcat(full_path, command);
		if (stat(full_path, &st) == 0)
			return (full_path);
		free(full_path);
		token = strtok(NULL, ":");
	}
	return (NULL);
}
