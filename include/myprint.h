/*
** EPITECH PROJECT, 2023
** MyPrint
** File description:
** myprint
*/

#ifndef MYPRINT_H_
    #define MYPRINT_H_

    #include <stdarg.h>

struct get_specifier {
    char type;
    void (*ptr)(va_list list);
};

void flag_c(va_list list);
void flag_s(va_list list);
void flag_n(va_list list);
void flag_a(va_list list);
void flag_e(va_list list);

int my_strlen(char const *str);
void print_s(char const *buffer);
void print_error(char const *buffer);
void print_char(char const c);
void print_array(char **array);
void print_nbr(int nb);
void print(char const *format, ...);

#endif /* !MYPRINT_H_ */
