#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdarg.h>
#include <limits.h>
#include <sys/wait.h>
#include <stdbool.h>

extern char **environ;

/**
 * struct high - helper functio
 * @interactive_mod: interactive mode
 */
struct high
{
	bool interactive_mod;
} high;

char *_strchr(const char *str, int character);
void enter_cmd(void);
void hight(int no);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
void _puts(char *str);
void simicolen(char *line, char *envp[], char *argv[]);
void exe(char *stk[], char *envp[], char *argv[], char *line);
void intToString(int num, char *str);
char *_getline(char *lineptr);
void _fork(char *stk[], char *av[], char *envp[], char *argv[]);
char **_strtok(char *line, char *stk[]);
char *_which(char *command, char **env);
char *_getenv(char *name, char **envp);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2, int n);
int shexit(char *line);
int test_white_space(char *str);
char *strtok2(char *line);

#endif
