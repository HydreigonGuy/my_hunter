/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task03
*/

int get_str_length(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_revstr(char *str)
{
    int l = get_str_length(str);
    char placeholder[l];

    for (int i = 0; i < l; i++)
        placeholder[l - i - 1] = str[i];
    for (int j = 0; j < l; j++)
        str[j] = placeholder[j];
    return (str);
}
