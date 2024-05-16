/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** task 06
*/

int my_is_prime(int nb)
{
    for (int i = 2; i < nb; i++) {
        if (nb % i == 0)
            return (0);
    }
    if (nb <= 0 || nb == 1)
        return (0);
    return (1);
}
