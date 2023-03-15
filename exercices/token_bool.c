#include "exercices.h"

bool token_bool(char **str, bool *comp)
{
    if (is_word(str, "true") == 1)
        return (*comp = true);
    if (is_word(str, "false") == 1) {
        *comp = false;
        return true;
    }
    return false;
}
