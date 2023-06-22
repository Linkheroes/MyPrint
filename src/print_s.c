/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print
*/

#include <unistd.h>
#include "myprint.h"

void print_s(char const *buffer)
{
    write(1, buffer, my_strlen(buffer));
}
