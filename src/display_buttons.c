/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** display_buttons.c
*/

#include "paint.h"

static
void display_file_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 102;
    const int startY = 2;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/file_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/file.png", startX, startY);
    }
}

static
void display_edit_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 102;
    const int startY = 2 + 50;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/edit_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/edit.png", startX, startY);
    }
}

static
void display_help_button(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 102;
    const int startY = 2 + 100;
    const sfVector2i mouse = sfMouse_getPositionRenderWindow(paint->window);

    if (mouse.x >= startX && mouse.x <= startX + iconWidth &&
        mouse.y >= startY && mouse.y <= startY + iconHeight) {
        display_texture(paint->window, "./ressource/help_hover.png",
            startX, startY);
    } else {
        display_texture(paint->window, "./ressource/help.png", startX, startY);
    }
}

void display_buttons(paint_t *paint)
{
    display_file_button(paint);
    display_edit_button(paint);
    display_help_button(paint);
    display_file_options(paint);
    display_help_options(paint);
}
