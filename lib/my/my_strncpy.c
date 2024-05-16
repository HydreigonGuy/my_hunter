/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** task 02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    for (int i = 0; i < n; i++) {
        if (src[i] == '\0')
            a = 1;
        if (a == 0)
            dest[i] = src[i];
        else if (a == 1)
            dest[i] = '\0';
    }
    return (dest);
}
