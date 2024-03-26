/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "paint.h"

int main(void)
{
    paint_t *paint = malloc(sizeof(paint_t));

    paint->brushSize = 5;
    paint->brushColor = sfBlack;
    paint->tempColor = sfBlack;
    create_window(paint);
    return OK;
}
