/*
** EPITECH PROJECT, 2020
** event_check.c
** File description:
** my_hunter
*/

#include "header.h"

void event_check(sfRenderWindow *w, int *i)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(w, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
            sfRenderWindow_close(w);
        if (event.type == sfEvtMouseButtonReleased) {
            i[6] = event.mouseButton.x;
            i[7] = event.mouseButton.y;
        }
    }
}