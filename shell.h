#ifndef SHELL_H
#define SHELL_H

#include <fcntl.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

#define MAX 1024

/* Function prototypes */
char *_strcat(char *dest, char *src);
int _strlen(const char *s);
int print_env(void);
int _strcmp(const char *s1, char *s2);
int _strncmp(const char *str1, const char *str2, int n);
char *_getenv(const char *name);

#endif /* SHELL_H */
