/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print_error
*/

#include <unistd.h>
#include "myprint.h"

void print_error(char const *buffer)
{
    write(2, buffer, my_strlen(buffer));
}
