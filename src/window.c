/*
** EPITECH PROJECT, 2024
** vaz
** File description:
** va
*/

#include "paint.h"

void init_win_texture(sfVideoMode mode, paint_t *paint)
{
    paint->window = sfRenderWindow_create(mode, "my_paint",
        sfResize | sfClose, NULL);
    paint->renderTexture = sfRenderTexture_create(mode.width,
        mode.height, sfFalse);
    if (!paint->window || !paint->renderTexture) {
        if (paint->window)
            sfRenderWindow_destroy(paint->window);
        if (paint->renderTexture)
            sfRenderTexture_destroy(paint->renderTexture);
    } else {
        sfRenderTexture_clear(paint->renderTexture, sfWhite);
        sfRenderTexture_display(paint->renderTexture);
    }
}

void update_render(paint_t *paint)
{
    const sfTexture *texture =
        sfRenderTexture_getTexture(paint->renderTexture);
    sfSprite *sprite = sfSprite_create();

    handle_drawing(paint);
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfRenderWindow_clear(paint->window, sfWhite);
    sfRenderWindow_drawSprite(paint->window, sprite, NULL);
    display_line(paint, 152);
    display_buttons(paint);
    display_help_options(paint);
    display_credits(paint);
    display_instructions(paint);
    display_tools(paint->window, 28, 28);
    display_sizes(paint->window, 535, 28);
    display_colors(paint->window, 1053, 52);
    sfRenderWindow_display(paint->window);
    sfSprite_destroy(sprite);
}

void create_window(paint_t *paint)
{
    const sfVideoMode mode = {1920, 1080, 32};

    init_win_texture(mode, paint);
    if (!paint->window || !paint->renderTexture)
        return;
    paint->windowWidth = sfRenderWindow_getSize(paint->window).x;
    while (sfRenderWindow_isOpen(paint->window)) {
        handle_events(paint);
        update_render(paint);
    }
    sfRenderTexture_destroy(paint->renderTexture);
    sfRenderWindow_destroy(paint->window);
    free(paint);
}
