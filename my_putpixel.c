/*
** EPITECH PROJECT, 2020
** my_putpixel.c
** File description:
** my_hunter
*/

#include "header.h"

static void draw_pixel(framebuffer_t *buff, int p, int *c)
{
    buff->pixels[0 + p * 4] = c[0];
    buff->pixels[1 + p * 4] = c[1];
    buff->pixels[2 + p * 4] = c[2];
    buff->pixels[3 + p * 4] = 255;
}

static void draw_heart2(framebuffer_t *buff, int *c, int p)
{
    for (int i = 0; i <= 20; i++)
        for (int j = 5; j < 15; j++)
            draw_pixel(buff, p + 2328 + i + 800 * j, c);
    for (int i = 2; i <= 18; i++)
        for (int j = 15; j < 17; j++)
            draw_pixel(buff, p + 2328 + i + 800 * j, c);
    for (int i = 4; i <= 16; i++)
        for (int j = 17; j < 19; j++)
            draw_pixel(buff, p + 2328 + i + 800 * j, c);
    for (int i = 6; i <= 14; i++)
        for (int j = 19; j < 21; j++)
            draw_pixel(buff, p + 2328 + i + 800 * j, c);
    for (int i = 8; i <= 12; i++)
        for (int j = 21; j < 22; j++)
            draw_pixel(buff, p + 2328 + i + 800 * j, c);
}

static void draw_heart(framebuffer_t *buff, int *c, int p)
{
    for (int i = 0; i <= 5; i++)
        for (int j = 0; j < 5; j++)
            draw_pixel(buff, p + 2330 + i + 800 * j, c);
    for (int i = 0; i <= 5; i++)
        for (int j = 0; j < 5; j++)
            draw_pixel(buff, p + 2341 + i + 800 * j, c);
    for (int i = 5; i <= 7; i++)
        for (int j = 2; j < 5; j++)
            draw_pixel(buff, p + 2330 + i + 800 * j, c);
    for (int i = -2; i <= 0; i++)
        for (int j = 2; j < 5; j++)
            draw_pixel(buff, p + 2341 + i + 800 * j, c);
    for (int i = 5; i <= 7; i++)
        for (int j = 2; j < 5; j++)
            draw_pixel(buff, p + 2341 + i + 800 * j, c);
    for (int i = -2; i <= 0; i++)
        for (int j = 2; j < 5; j++)
            draw_pixel(buff, p + 2330 + i + 800 * j, c);
    draw_heart2(buff, c, p);
}

static void draw_lives(framebuffer_t *buff, int lives, int a, int b)
{
    int c[3] = {255 - a, 255 - a, 255 - a};

    if (b == 0)
        c[0] = a;
    if (b == 1)
        c[1] = a;
    if (b == 2)
        c[2] = a;
    for (int i = 0; i < lives; i++)
        draw_heart(buff, c, i * (-30) + 40);
}

void my_put_pixel(framebuffer_t *buff, int a, int b, int lives)
{
    int c[3] = {0, 0, 0};

    for (int i = 0; i < 800 * 600; i++)
        draw_pixel(buff, i, c);
    for (int i = 0; i < 800 * 600; i++)
        buff->pixels[b + i * 4] = 255 - a;
    if (b != 2)
        for (int i = 0; i < 800 * 600; i++)
            buff->pixels[b + 1 + i * 4] = a;
    else
        for (int i = 0; i < 800 * 600; i++)
            buff->pixels[b - 2 + i * 4] = a;
    draw_lives(buff, lives, a, b);
}