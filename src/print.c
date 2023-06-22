/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print_all
*/

#include <stdarg.h>
#include <stdlib.h>
#include "myprint.h"

static const struct get_specifier flag[] = {
    {'c', &flag_c}, {'s', &flag_s}, {'e', &flag_e},
    {'a', &flag_a}, {'n', &flag_n}, {'\0', NULL}
};

static void check_args(char type, va_list list)
{
    for (int i = 0; flag[i].ptr != NULL; i++) {
        if (flag[i].type == type)
            flag[i].ptr(list);
    }
}

void print(char const *format, ...)
{
    va_list list;
    int var = 0;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            check_args(format[i + 1], list);
            i++, var++;
        } else {
            print_char(format[i]);
        }
    }
}
