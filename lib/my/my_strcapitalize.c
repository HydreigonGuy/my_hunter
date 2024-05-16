/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** task 10
*/

int cap_check(char p)
{
    if (p == ' ' || p == '+' || p == '-')
        return (1);
    return (0);
}

char *my_strcapitalize(char *str)
{
    int cap = 0;
    int low = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (i != 0)
            cap = cap_check(str[i - 1]);
        else
            cap = 1;
        if (96 < str[i] && str[i] < 123 && cap == 1)
            str[i] = str[i] - 32;
        if (64 < str[i] && str[i] < 91 && cap == 0)
            str[i] = str[i] + 32;
    }
    return (str);
}
