/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** my lib
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'A' || 'Z' < str[i])
            return (0);
    }
    return (1);
}
