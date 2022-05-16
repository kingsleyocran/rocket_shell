#ifndef BUILTINS_H
#define BUILTINS_H

int _exit_(char **args);
int _help(char **args);
int _cd(char **args);
int _num_builtins(void);

static char *builtin_str[] = {
"cd",
"help",
"exit"
};

static int (*builtin_func[])(char **) = {
&_cd,
&_help,
&_exit_
};

#endif /* BUILTINS_H */
