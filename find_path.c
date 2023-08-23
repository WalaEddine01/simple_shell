#include "main.h"
/**
 * _which - find command
 * @command: command to find
 * @env: environement variable
 * Return: full path of command
*/
char *_which(char *command, char **env)
{
	char *path = _getenv("PATH", env), *token, *full_path = NULL;
	struct stat st;
	char *command_copy = _strdup(command);
	char *command_name = strtok(command_copy, " ");
	char *command2 = strtok(NULL, " ");

	token = strtok(path, ":");
	while (token != NULL)
	{
		full_path = malloc(sizeof(char) * 50);
		if (full_path == NULL)
		{
			perror("malloc");
			free(command_copy);
			free(path);
			exit(1);
		}
		_strcpy(full_path, token);
		_strcat(full_path, "/");
		_strcat(full_path, command_name);
		if (stat(full_path, &st) == 0)
		{
			if (command2 != NULL)
			{
				_strcat(full_path, " ");
				_strcat(full_path, command2);
			}
			free(command_copy);
			free(path);
			free(command2);
			return (full_path);
		}
		free(full_path);
		token = strtok(NULL, ":");
	}
	free(command_copy);
	free(path);
	return (_strdup(command));
}
