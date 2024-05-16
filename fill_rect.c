/*
** EPITECH PROJECT, 2020
** fill_rect.c
** File description:
** my_hunter
*/

#include "header.h"

void fill_rect2(sfIntRect *rect)
{
    rect->top = 0;
    rect->left = 0;
    rect->width = 200;
    rect->height = 200;
}

void fill_rect(sfIntRect *rect)
{
    rect->top = 0;
    rect->left = 0;
    rect->width = 110;
    rect->height = 110;
}