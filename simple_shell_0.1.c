#include "main.h"
/**
 * main - Simple shell
 *
 * Return: 0 or -1
 */
int main(void)
int main(void)
{
        char *stk[10], *av[] = {NULL}, *line = NULL;
        size_t s;
        ssize_t read;
        pid_t pid;

        while (1)
        {
                _puts("$ ");
                line = _getline(line, s, stdin);
                _strtok(line, stk);
                if (_strcmp(stk[0], "exit") == 0)
                        break;
                _fork(stk, av, line);
        }
        free(line);
        return (0);
}
