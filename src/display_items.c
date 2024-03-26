/*
** EPITECH PROJECT, 2024
** my_paint
** File description:
** display_items.c
*/

#include "paint.h"

void display_tools(sfRenderWindow *window, float startX, float startY)
{
    display_texture(window, "./ressource/pen.png", startX, startY);
    display_texture(window, "./ressource/eraser.png", startX + 146, startY);
    display_texture(window, "./ressource/brush.png", startX + 292, startY);
}

void display_sizes(sfRenderWindow *window, float startX, float startY)
{
    display_texture(window, "./ressource/small.png", startX, startY);
    display_texture(window, "./ressource/medium.png", startX + 146, startY);
    display_texture(window, "./ressource/large.png", startX + 292, startY);
}

void display_colors(sfRenderWindow *window, float startX, float startY)
{
    display_texture(window, "./ressource/color_red.png", startX, startY);
    display_texture(window, "./ressource/color_green.png",
                    startX + 75, startY);
    display_texture(window, "./ressource/color_blue.png",
                    startX + 150, startY);
    display_texture(window, "./ressource/color_yellow.png",
                    startX + 225, startY);
    display_texture(window, "./ressource/color_black.png",
                    startX + 300, startY);
}

void display_credits(paint_t *paint)
{
    const int startX = paint->windowWidth - 490;
    const int startY = 7;

    if (paint->aboutClicked) {
    display_texture(paint->window, "./ressource/credits.png",
                startX, startY);
    }
}

void display_instructions(paint_t *paint)
{
    const int startX = paint->windowWidth - 490;
    const int startY = 7;

    if (paint->help2Clicked) {
    display_texture(paint->window, "./ressource/instructions.png",
                startX, startY);
    }
}
