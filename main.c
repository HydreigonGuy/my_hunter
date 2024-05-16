/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** my_hunter
*/

#include "header.h"

static void my_put_highscore(int fd, int a)
{
    int b = 1;
    int x = 0;
    int p = 0;

    if (a == 0)
        write(fd, "0", 1);
    for (int i = 10; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            b = b * 10;
        if (a / b != 0 || x == 1) {
            p = (a / b) + 48;
            write(fd, &p, 1);
            a = a - ((a/b) * b);
            x = 1;
        }
        b = 1;
    }
    write(fd, "\0", 1);
}

static void display_score(int score)
{
    int fd;
    char *str;

    str = malloc(sizeof(char) * 1);
    fd = open("highscore", O_RDONLY);
    read(fd, str, 5);
    close(fd);
    write(1, "Your score is: ", 15);
    my_put_nbr(score);
    write(1, "\n", 1);
    if (my_getnbr(str) < score) {
        write(1, "New Highscore!!!\n", 18);
        my_put_highscore(open("highscore", O_WRONLY), score);
    } else {
        write(1, "Highscore: ", 11);
        for (int i = 0; str[i] != '\0'; i++)
            write(1, &str[i], 1);
        write(1, "\n", 1);
    }
}

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfTexture *texture;
    sfSprite *sprite;
    framebuffer_t *framebuffer;
    sfVideoMode m = {800, 600, 32};
    int score = 0;

    if (ac == 2)
        if (check_for_h(av[1]) == 1)
            return (0);
    srand(time(0));
    window = sfRenderWindow_create(m, "SFML window", sfResize | sfClose, NULL);
    framebuffer = framebuffer_create(800, 600);
    texture = sfTexture_create(800, 600);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    score = game(framebuffer, window, texture, sprite);
    clear_mem(framebuffer, window, texture, sprite);
    display_score(score);
    return (0);
}