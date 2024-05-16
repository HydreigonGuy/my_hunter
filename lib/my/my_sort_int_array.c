/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** my lib
*/

void my_sort_int_array(int *tab, int size)
{
    int a = 0;
    int b = 0;
    int c = 0;

    while (b < size * 2) {
        if (tab[a] > tab[a + 1]) {
            c = tab[a];
            tab[a] = tab[a + 1];
            tab[a + 1] = c;
        }
        a++;
        if (a + 2 >= size) {
            a = 0;
            b++;
        }
    }
}
