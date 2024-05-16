/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** task 09
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (64 < str[i] && str[i] < 91)
            str[i] = str[i] + 32;
    }
    return (str);
}