/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** my lib
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || 126 < str[i])
            return (0);
    }
    return (1);
}
