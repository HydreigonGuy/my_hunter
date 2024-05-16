/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** my lib
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('0' > str[i] || str[i] > '9')
            return (0);
    }
    return (1);
}
