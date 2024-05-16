/*
** EPITECH PROJECT, 2020
** My_strcpy.c
** File description:
** task 01
*/

char *my_strcpy(char *dest, char const *src)
{
    if (src[0] == '\0')
        dest[0] = '\0';
    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        dest[i + 1] = '\0';
    }
    return (dest);
}
