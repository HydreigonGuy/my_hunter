/*
** EPITECH PROJECT, 2020
** duck.c
** File description:
** my_hunter
*/

#include "header.h"

sfVector2f get_position(int c, int d)
{
    sfVector2f position;

    position.x = c;
    position.y = d % 490;
    return (position);
}

void duck(framebuffer_t *buff, int c, int d, sfSprite *s)
{
    sfSprite_setPosition(s, get_position(c, d));
}