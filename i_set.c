/*
** EPITECH PROJECT, 2020
** i_set.c
** File description:
** my_hunter
*/

#include "header.h"

static void rect_change(int *i, sfIntRect *rect)
{
    switch (i[4]) {
    case 0:
        rect->left = 0;
        break;
    case 5:
        rect->left = 110;
        break;
    case 10:
        rect->left = 220;
        break;
    case 15:
        rect->left = 110;
        break;
    case 20:
        i[4] = -1;
        break;
    }
}

static void i_set2(int *i)
{
    if (i[6] - 800 + 8 * i[10] < 200 && i[6] - 800 + 8 * i[10] >= 0) {
        if (i[7] - i[11] < 200 && i[7] - i[11] >= 0 && i[10] > 0) {
            i[9] = 0;
            i[10] = 0;
            i[8]++;
        }
        if (i[7] + i[11] < 200 && i[7] + i[11] >= 0 && i[10] > 0) {
            i[9] = 0;
            i[10] = 0;
            i[8]++;
        }
    }
    i[6] = 0;
    i[7] = 0;
    i[0]++;
    i[4]++;
}

static void color_fade(int *i)
{
    i[0] = 0;
    i[1]++;
    if (i[1] == 3)
        i[1] = 0;
}

void i_set(int *i, sfIntRect *rect)
{
    if (i[6] - i[2] < 110 && i[6] - i[2] >= 0 && i[2] > 0) {
        if (i[7] - (i[3] % 490) < 110 && i[7] - (i[3] % 490) >= 0) {
            i[8]++;
            i[2] = -100;
            i[3] = rand();
        }
    }
    i_set2(i);
    if (i[0] > 255) {
        color_fade(i);
    }
    i[2] = i[2] + 5 + (i[8] / 5);
    if (i[2] >= 800) {
        i[5]--;
        i[2] = -100;
        i[3] = rand();
    }
    rect_change(i, rect);
}