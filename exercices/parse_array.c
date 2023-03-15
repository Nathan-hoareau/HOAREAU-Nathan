#include "exercices.h"

struct my_json_array {
    char *value;
    struct my_json_array *next;
};

bool parse_array(char **str, struct my_json_array *array)
{
    if (is_char(str, '[') == false)
        return false;
    for (int i = 0; (*str)[i] != ']'; i++) {
        array->value = token_string(str);
        is_char(str, ',');
        array->next = malloc(sizeof(struct my_json_array));
        array = array->next;
    }
    is_char(str, ']');
    return true;
}

int main()
{
    char *str = "[\"hello\",\"world\",\"A\"]";
    struct my_json_array output_array = {0};

    printf("str before = %s\n", str);
    printf("valid token = %d\n", parse_array(&str, &output_array));
    printf("str after = %s\n", str);
    printf("output value 0 = %s\n", output_array.value);
    printf("output value 1 = %s\n", output_array.next->value);
    printf("output value 1 = %s\n", output_array.next->next->value);
}
