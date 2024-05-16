/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** my lib
*/

int my_str_isalpha(char const *str)
{
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        x = 0;
        if ('a' <= str[i] && str[i] <= 'z')
            x++;
        if ('A' <= str[i] && str[i] <= 'Z')
            x++;
        if (x == 0)
            return (0);
    }
    return (1);
}
