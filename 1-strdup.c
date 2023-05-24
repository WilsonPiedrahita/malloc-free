#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *_strdup(char *str)
{
    char *duplicate;
    size_t len;

    if (str == NULL)
        return NULL;

    len = strlen(str); 
    duplicate = malloc((len + 1) * sizeof(char));
    if (duplicate == NULL)
        return NULL;

    strcpy(duplicate, str);
    return duplicate;
}

