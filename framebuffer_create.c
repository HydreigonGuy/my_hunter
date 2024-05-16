/*
** EPITECH PROJECT, 2020
** framebuffer_create.c
** File description:
** my_hunter
*/

#include "header.h"

framebuffer_t *framebuffer_create(unsigned int w, unsigned int h)
{
    framebuffer_t *buff;
    buff = malloc(sizeof(framebuffer_t));
    buff->width = w;
    buff->height = h;
    buff->pixels = malloc(w * h * 4);
    return (buff);
}