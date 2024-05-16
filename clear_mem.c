/*
** EPITECH PROJECT, 2020
** clear_mem.c
** File description:
** my_hunter
*/

#include "header.h"

static void framebuffer_destroy(framebuffer_t *buff)
{
    free(buff);
    free(buff->pixels);
}

void clear_mem(framebuffer_t *f, sfRenderWindow *w, sfTexture *t, sfSprite *s)
{
    framebuffer_destroy(f);
    sfSprite_destroy(s);
    sfTexture_destroy(t);
    sfRenderWindow_destroy(w);
}