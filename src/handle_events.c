/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_events.c
*/

#include "paint.h"

static
void handle_button_click(paint_t *paint)
{
    handle_tool_change(paint);
    handle_color_change(paint);
    handle_size_change(paint);
    handle_drawing(paint);
    handle_file(paint);
    handle_help(paint);
    handle_save(paint);
    handle_new(paint);
    handle_about(paint);
    handle_help2(paint);
}

void handle_events(paint_t *paint)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(paint->window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(paint->window);
        }
        if (event.type == sfEvtMouseButtonPressed &&
            event.mouseButton.button == sfMouseLeft) {
            paint->mousePos.x = event.mouseButton.x;
            paint->mousePos.y = event.mouseButton.y;
            handle_button_click(paint);
        }
    }
}
