##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## my_hunter
##

SRC	=	lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_getnbr.c	\
		framebuffer_create.c	\
		clear_mem.c	\
		duck.c	\
		i_set.c	\
		fill_rect.c	\
		event_check.c	\
		my_putpixel.c	\
		skin_pick.c	\
		ghastly.c	\
		game.c	\
		check_for_h.c	\
		main.c

all:
	gcc $(SRC) -l csfml-graphics -o my_hunter

clean:

fclean:
	rm my_hunter

re:	fclean	all
