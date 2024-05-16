/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** task 01
*/

void my_swap(int *a, int *b)
{
    int placeholder = *a;
    *a = *b;
    *b = placeholder;
}

