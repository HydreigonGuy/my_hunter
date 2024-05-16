/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** task 02
*/

char *my_strcat(char *dest, char const *src)
{
    int c = 0;

    for (int i = 0; dest[i] != '\0'; i++) {
        c++;
    }
    for (int i = 0; src[i] != '\0'; i++) {
        dest[c + i] = src[i];
    }
    return (dest);
}
