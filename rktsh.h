#ifndef RKTSH_H
#define RKTSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024
#define TRUE 1
#define PROMPT "$ "

#define RKTSH_RL_BUFSIZE 1024

/* error strings */
#define ERR_MALLOC "Unable to malloc space\n"
#define ERR_FORK "Unable to fork and create child process\n"
#define ERR_PATH "No such file or directory\n"
extern char **environ;

/* helper functions */
/* void _puts(char *str); */
int _strlen(char *s);
int _strcmp(char *name, char *variable, unsigned int length);
int _strncmp(char *name, char *variable, unsigned int length);
char *_strcpy(char *dest, char *src);
char *_itoa(int num);
int _atoi(char *s);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);

#endif /* RKTSH_H */
