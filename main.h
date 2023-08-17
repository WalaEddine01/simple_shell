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
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
void _puts(char *str);
char *_getline(char *lineptr, size_t s, FILE *stream);
void _fork(char *stk[], char *av[], char *line);
char *_strtok(char *line, char *stk[]);

#endif
