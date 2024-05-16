/*
** EPITECH PROJECT, 2020
** my_strstr.c
** File description:
** my lib
*/

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int l = my_strlen(to_find);
    int m = my_strlen(str);
    int x = 0;

    for (int i = 0; l + i <= m; i++) {
        x = 0;
        for (int j = 0; j < l; j++) {
            if (str[i + j] != to_find[j])
                x++;
        }
        if (x == 0)
            return (&str[i]);
    }
    return (0);
}
