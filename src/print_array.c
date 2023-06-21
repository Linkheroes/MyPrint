/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print_array
*/

#include <stddef.h>
#include "myprint.h"

void print_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        print(array[i]);
}
