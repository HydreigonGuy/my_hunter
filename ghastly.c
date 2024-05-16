/*
** EPITECH PROJECT, 2020
** ghatly.c
** File description:
** my_hunter
*/

#include "header.h"

sfVector2f get_position2(int *i)
{
    sfVector2f position;

    position.x = 800 - 8 * i[10];
    if (i[11] >= 0)
        position.y = i[11];
    if (i[11] < 0)
        position.y = -i[11];
    i[11] = i[11] + 3;
    if (rand() % 12 == 1)
        i[11] = -i[11];
    return (position);
}

static void reset_check(int *i)
{
    if (i[8] % 10 == 9 && i[9] == 0) {
        i[9] = 1;
        i[11] = rand() % 200 + 100;
    }
    if (800 < 7 * i[10]) {
        i[5]--;
        i[9] = 0;
        i[10] = 0;
    }
}

void ghastly(int *i, sfRenderWindow *w)
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect r;

    reset_check(i);
    if (i[9] == 1) {
        texture = sfTexture_createFromFile("ghastly.png", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        fill_rect2(&r);
        r.left = ((i[10] / 15) % 5) * 200;
        sfSprite_setTextureRect(sprite, r);
        sfSprite_setPosition(sprite, get_position2(i));
        sfRenderWindow_drawSprite(w, sprite, NULL);
        i[10]++;
    }
}