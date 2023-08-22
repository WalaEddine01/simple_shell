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

int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
void _puts(char *str);
char *_getline(char *lineptr);
void _fork(char *stk[], char *av[], char *envp[], char *argv[]);
char **_strtok(char *line, char *stk[]);
void _fork2(char *stk[], char *av[], char *envp[], char *argv[]);
char *_which(char *command, char **env);
char *_getenv(char *name, char **envp);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2, int n);
int shexit(char *line);
void test_free(int n, ...);
<<<<<<< HEAD
int test_white_space(char *str);
=======
int test_white_space(const char *str);
>>>>>>> bbf836f2d5ff4bed7a313f9ad1fceb9a58967444

#endif
