#include "main.h"
/**
 * _getenv - get the name environment variable
 * @name: the name of the environment variable
 * @envp: array of strings of environment variables
 * Return: a pointer to envirnment variable
 */
char *_getenv(char *name, char **envp)
{
	char *env, *token, *value;

	while (*envp != NULL)
	{
		env = _strdup(*envp);
		token = strtok(env, "=");
		if (_strcmp(name, env, _strlen(name)) == 0)
		{
			token = strtok(NULL, "=");
			value = _strdup(token);
			return (value);
		}
		envp++;
	}
	return (NULL);
}
