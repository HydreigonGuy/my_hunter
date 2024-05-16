/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** task 05
*/

int my_compute_square_root(int nb)
{
    for (int i = 1; i <= nb; i++)
        if (i * i == nb)
            return (i);
    return (0);
}
