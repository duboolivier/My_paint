/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** display_texture.c
*/

#include "paint.h"

void display_texture(sfRenderWindow *window, const char *imagePath,
    float x, float y)
{
    sfTexture *texture = sfTexture_createFromFile(imagePath, NULL);
    sfSprite *sprite = sfSprite_create();

    if (!texture)
        return;
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}
