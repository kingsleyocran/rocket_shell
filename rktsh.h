#ifndef RKTSH_H
#define RKTSH_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "builtins.h"


#define BUFFER 1024
#define TRUE 1

#define RKTSH_RL_BUFSIZE 1024
#define RKTSH_TOK_BUFSIZE 64
#define RKTSH_TOK_DELIM " \t\r\n\a"

/* prompt string */
#define PROMPT "🚀 ►► "

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
char *_itoa(long int num, int base);
int _atoi(char *s);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);


char *_read_line(void);
char **_split_line(char *line);
int _execute(char **args);
int _launch(char **args);

#endif /* RKTSH_H */
