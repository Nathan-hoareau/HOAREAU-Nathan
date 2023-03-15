#include "exercices.h"

bool is_char(char **str, char c)
{
    if (*str[0] == c) {
        (*str)++;
        return true;
    }
    return false;
}
