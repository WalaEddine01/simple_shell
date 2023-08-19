#include "main.h"
/**
 * _strtok - strtok
 * @line: line to tokenize
 * @stk: array of string
 * Return: pointer to the first token found
*/
char **_strtok(char *line, char *stk[])
{
	char *token;
	int i = 0;

	token = strtok(line, " ");
	while (token)
	{
		stk[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	stk[i] = NULL;
	return (stk);
}
