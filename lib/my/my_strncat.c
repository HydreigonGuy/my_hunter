/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** task 03
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int c = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        c++;
    }
    for (int i = 0; i < nb; i++) {
        dest[c + i] = src[i];
    }
    return (dest);
}
