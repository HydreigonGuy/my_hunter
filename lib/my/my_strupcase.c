/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** task 08
*/

char *my_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (96 < str[i] && str[i] < 123)
            str[i] = str[i] - 32;
    }
    return (str);
}
