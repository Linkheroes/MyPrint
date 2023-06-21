/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print_char
*/

#include <unistd.h>
#include "myprint.h"

void print_char(char const c)
{
    write(1, &c, 1);
}
