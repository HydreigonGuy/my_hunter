/*
** EPITECH PROJECT, 2020
** check_for_h.c
** File description:
** my_hunter
*/

#include "header.h"

int check_for_h(char *str)
{
    if (str[0] == '\0')
        return (0);
    if (str[1] == '\0')
        return (0);
    if (str[0] == '-' && str[1] == 'h' && str[2] == '\0') {
        write(1, "This is a game, the goal of the game is to shoot", 48);
        write(1, " the enemies by clicking on them with your mouse.\n", 50);
        write(1, "You must shoot the enemy before he reaches the ", 47);
        write(1, "other side, if you don't, you lose a life.\n", 43);
        write(1, "You get 3 lives, lose them all and it's game over.\n", 51);
        write(1, "Possible inputs:\n", 17);
        write(1, "    -h : To show a description and possible inputs.\n", 52);
        return (1);
    }
    return (0);
}