#include "holberton.h"

/**
*nbr_spaces - count the number of occurent of a string
*@s: the string to check
*Return: int
*/

unsigned int nbr_spaces(char *s)
{
    int index, count = 0;

    for (i = 0; s[index] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            count++;
        }
    }

    return (count);
}

/**
*stringToTokens - it spliys a sentence into multiple words.
*@str: the string passed
*Return: return tokens
*/

char **stringToTokens(char *str)
{
    int i  = 0;
    const char sep[] = " ";
    int space = nbr_spaces(str);
    char **tokens = malloc(sizeof(char *) * (space + 1));
    char *token;

    if (!tokens)
    {
        fprintf(stderr,"sh: allocation error\n");
        exit(1);
    }

    token = strtok(str, sep);

    while (token != NULL)
    {
        tokens[i] = token;
        token = strtok(NULL, sep);
        i++;
    }
    tokens[i] = NULL;

    return (tokens);
}
