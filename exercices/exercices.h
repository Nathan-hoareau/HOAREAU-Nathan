/*
** EPITECH PROJECT, 2023
** How to do a JSON parser in C - Workshop - Alexis Cheron
** File description:
** Source code
*/
#ifndef JSON_EXERCISES_H
#define JSON_EXERCISES_H

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *token_string(char **);
bool token_bool(char **, bool *);
bool is_char(char **, char );
bool is_word(char **, char *);

#endif