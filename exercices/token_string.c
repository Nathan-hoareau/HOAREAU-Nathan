#include "exercices.h"

char *token_string(char **str)
{
    char *tmp = NULL;
    int i = 0;

    if ((*str)[0] == '\"') {
        (*str)++;
        for (; (*str)[i] != '\0' && (*str)[i] != '\"'; i++);
        if ((*str)[i] == '\0') {
            (*str)--;
            return NULL;
        }
        if ((*str)[i] == '\"') {
            tmp = strndup(*str, i);
            is_word(str, tmp);
            (*str)++;
            return tmp;
        }
    }
    return NULL;
}
