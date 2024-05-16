/*
** EPITECH PROJECT, 2020
** my_putnbr.c
** File description:
** task 2
*/

void my_putchar(char);

int my_put_nbr(int a)
{
    int b = 1;
    int x = 0;

    if (a < 0) {
        my_putchar('-');
        a = -a;
    }
    if (a == 0)
        my_putchar('0');
    for (int i = 10; i >= 0; i--) {
        for (int j = 0; j < i; j++)
            b = b * 10;
        if (a / b != 0 || x == 1) {
            my_putchar((a / b) + 48);
            a = a - ((a/b) * b);
            x = 1;
        }
        b = 1;
    }
}
