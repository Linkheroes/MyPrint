/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** print_nbr
*/

#include "myprint.h"

void print_nbr(int nb)
{
    if (nb < 0) {
        print_char('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        print_nbr(nb / 10);
        print_nbr(nb % 10);
    } else {
        print_char(nb + 48);
    }
}
