#include "rktsh.h"

/**
 * search_token - ss
 * @string: ss
 * @delim: ss
 * Return: pointer to char on success, NULL on failure
 */
char *search_token(char *string, char *delim)
{
static char *remember = NULL;
int string_length = 0;
int i= 0;
int search_hit=0;

if(delim == NULL)
return NULL;

if((string == NULL) && (remember == NULL))
return NULL;

if(string == NULL)
string = remember;

string_length = strlen(string) + 1;
for(i=0;i<string_length;i++)
{
if(string[i] == delim[0])
{
search_hit = 1 ;
break;
}
}

if(search_hit != 1)
{
remember = NULL;
return string;
}
string[i] = '\0';
if((string+i+1) != NULL)
remember = string + i + 1;
else
remember = NULL;
return string;
}
