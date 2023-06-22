/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** args_type
*/

#include <stdarg.h>
#include <stddef.h>
#include "myprint.h"

void flag_c(va_list list)
{
    print_char(va_arg(list, int));
}

void flag_s(va_list list)
{
    print_s(va_arg(list, char *));
}

void flag_n(va_list list)
{
    print_nbr(va_arg(list, int));
}

void flag_a(va_list list)
{
    print_array(va_arg(list, char **));
}

void flag_e(va_list list)
{
    print_error(va_arg(list, char *));
}
