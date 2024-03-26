/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** display_help_options.c
*/

#include "paint.h"

static
void display_about_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/about_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/about.png",
            startX, startY);
    }
}

static
void display_help2_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2 + 50;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/help2_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/help2.png",
            startX, startY);
    }
}

void display_help_options(paint_t *paint)
{
    if (paint->helpClicked) {
        display_about_button(paint);
        display_help2_button(paint);
    }
}
