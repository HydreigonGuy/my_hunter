/*
** EPITECH PROJECT, 2020
** get_nbr.c
** File description:
** task02
*/

int my_getnbr(char const *str)
{
    int n = 0;
    int p = 0;
    int x = 0;

    for (int i = 0; str[i] == '-' || str[i] == '+'; i++) {
        p++;
        if (str[i] == '-')
            n++;
    }
    for (int i = 0; '0' <= str[n + i] && str[n + i] <= '9'; i++)
        x = (x * 10) + str[n + i] - 48;
    if (n % 2 == 1)
        x = -x;
    return (x);
}
