/*
** EPITECH PROJECT, 2020
** header.h
** File description:
** my_hunter
*/

#ifndef HEADER
#define HEADER

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Graphics.h>
#include <unistd.h>
struct framebuffer {
    unsigned int width;
    unsigned int height;
    sfUint8 *pixels;
};
typedef struct framebuffer framebuffer_t;

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_put_nbr(int);
int my_getnbr(char *);

void clear_mem(framebuffer_t *f, sfRenderWindow *w, sfTexture *t, sfSprite *s);
framebuffer_t *framebuffer_create(unsigned int w, unsigned int h);
int game(framebuffer_t *f, sfRenderWindow *w, sfTexture *t, sfSprite *s);
void my_put_pixel(framebuffer_t *buff, int a, int b, int lives);
void duck(framebuffer_t *buff, int c, int d, sfSprite *s);
void i_set(int *i, sfIntRect *rect);
void fill_rect(sfIntRect *rect);
void fill_rect2(sfIntRect *rect);
void event_check(sfRenderWindow *w, int *i);
int check_for_h(char *str);
char *skin_pick(void);
void ghastly(int *i, sfRenderWindow *w);

#endif /* !HEADER */
