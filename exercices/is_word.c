#include "exercices.h"

bool is_word(char **str, char *comp)
{
    if (strncmp(*str, comp, strlen(comp)) == 0) {
        (*str) += strlen(comp);
        return 1;
    }
    return 0;
}
