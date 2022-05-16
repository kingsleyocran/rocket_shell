#include "rktsh.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int i, d, n, len, f, digit;

i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (i < len && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}

if (f == 0)
return (0);

return (n);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: String to be duplicated.
 * Return: pointer to newly allocated space in memory
 * containing duplicate string.
 */
char *_strdup(char *str)
{
char *dup;
int i;

if (str == NULL)
return (NULL);

i = 0;

while (str[i])
{
i++;
}

dup = malloc(sizeof(char) * (i + 1));
if (dup == NULL)
{
return (NULL);
}

i = 0;
while (str[i])
{
dup[i] = str[i];
i++;
}

dup[i] = '\0';
return (dup);
}

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
