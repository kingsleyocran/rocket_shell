#include "rktsh.h"

/**
 * _exit - Builtin command: exit.
 * @args: List of args.  Not examined.
 * Return: Always returns 0, to terminate execution.
 */
int _exit_(char **args)
{
if (args[2] == NULL)
{
fprintf(stderr, "rktsh: expected argument to \"exit\"\n");
}
return (0);
}
