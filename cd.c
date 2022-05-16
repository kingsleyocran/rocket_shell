#include "rktsh.h"

/**
 * _cd - Bultin command: change directory.
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * Return: Always returns 1, to continue executing.
 */
int _cd(char **args)
{
if (args[1] == NULL)
{
fprintf(stderr, "rktsh: expected argument to \"cd\"\n");
}
else
{
if (chdir(args[1]) != 0)
{
perror("rktsh");
}
}
return (1);
}
