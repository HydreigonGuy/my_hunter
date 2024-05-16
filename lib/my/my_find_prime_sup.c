/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** task 07
*/

int check_prime(int nb)
{
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    if (nb == 0 || nb == 1)
        return (0);
    return (1);
}

int my_find_prime_sup(int nb)
{
    int s = check_prime(nb);
    int r;

    if (nb <= 2)
        return (2);
    if (s == 1)
        return (nb);
    if (nb + 1 > 2147483647)
        return (0);
    r = my_find_prime_sup(nb + 1);
    if (r > 2147483647)
        return (0);
    return (r);
}
