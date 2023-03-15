#include "exercices.h"

struct object_item {
    char *key;
    char *value;
};

bool parse_object_item(char **str, struct object_item *object)
{
    int i = 0;

    for (; (*str)[i] && (*str)[i] != ':'; i++);
    if ((*str)[i] != ':')
        return 0;
    object->key = token_string(str);
    is_char(str, ':');
    object->value = token_string(str);
    return 1;
}
