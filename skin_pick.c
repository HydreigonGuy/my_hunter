/*
** EPITECH PROJECT, 2020
** skin_pick.c
** File description:
** my_hunter
*/

#include "header.h"

char *skin_pick(void)
{
    int r = rand();

    if (0 == r % 4)
        return ("bomb1.png");
    if (1 == r % 4)
        return ("rocket1.png");
    if (2 == r % 4)
        return ("viking1.png");
    if (3 == r % 4)
        return ("bat1.png");
}