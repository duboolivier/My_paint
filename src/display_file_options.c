/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** display_file_options.c
*/

#include "paint.h"

static
void display_new_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/new_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/new.png", startX, startY);
    }
}

static
void display_open_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2 + 50;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/open_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/open.png", startX, startY);
    }
}

static
void display_save_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2 + 100;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/save_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/save.png", startX, startY);
    }
}

void display_file_options(paint_t *paint)
{
    if (paint->fileClicked) {
        display_new_button(paint);
        display_open_button(paint);
        display_save_button(paint);
    }
}
