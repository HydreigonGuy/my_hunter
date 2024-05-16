/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** task 06
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0') {
        i++;
        if (s1[i] != s2[i])
            return (s1[i - 1] - s2[i - 1]);
    }
    return (0);
}