/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** my_hunter
*/

#include "header.h"

static void function_call1(int *i, sfRenderWindow *w)
{
    i[3] = rand();
    sfRenderWindow_setFramerateLimit(w, 30);
}

static void fun_call2(framebuffer_t *f, int *i, sfRenderWindow *w, sfSprite *s)
{
    sfIntRect r;

    if (i[5] <= 0)
        sfRenderWindow_close(w);
    fill_rect(&r);
    my_put_pixel(f, i[0], i[1], i[5]);
    i_set(i, &r);
    if (i[4] % 5 == 0 || (i[8] == 0 && i[4] == 1))
        sfSprite_setTextureRect(s, r);
    duck(f, i[2], i[3], s);
}

static void func_call3(sfRenderWindow *w, sfSprite *s1, sfSprite *s2)
{
    sfRenderWindow_clear(w, sfBlack);
    sfRenderWindow_drawSprite(w, s1, NULL);
    sfRenderWindow_drawSprite(w, s2, NULL);
}

int game(framebuffer_t *f, sfRenderWindow *w, sfTexture *t, sfSprite *s)
{
    int i[12] = {0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0};
    sfTexture *texture;
    sfSprite *sprite;

    function_call1(i, w);
    texture = sfTexture_createFromFile(skin_pick(), NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    while (sfRenderWindow_isOpen(w))
    {
        event_check(w, i);
        fun_call2(f, i, w, sprite);
        sfTexture_updateFromPixels(t, f->pixels, 800, 600, 0, 0);
        func_call3(w, s, sprite);
        ghastly(i, w);
        sfRenderWindow_display(w);
    }
    return (i[8]);
}