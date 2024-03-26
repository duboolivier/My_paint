/*
** EPITECH PROJECT, 2024
** iame
** File description:
** image
*/

#include "paint.h"

void display_line(paint_t *paint, int y)
{
    sfRectangleShape *line = sfRectangleShape_create();

    sfRectangleShape_setFillColor(line, sfBlack);
    sfRectangleShape_setSize(line, (sfVector2f){paint->windowWidth, 5});
    sfRectangleShape_setPosition(line, (sfVector2f){0, y});
    sfRenderWindow_drawRectangleShape(paint->window, line, NULL);
    sfRectangleShape_destroy(line);
}
