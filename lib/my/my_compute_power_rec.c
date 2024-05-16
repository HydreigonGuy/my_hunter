/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** task 04
*/

int my_compute_power_rec(int nb, int p)
{
    int s;
    long a;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    if (nb * my_compute_power_rec(nb, p - 1) > 2147483647)
        return (0);
    s = nb * my_compute_power_rec(nb, p - 1);
    return (s);
}
