/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** task 02
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
