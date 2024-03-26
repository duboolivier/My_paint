/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "paint.h"

void handle_drawing(paint_t *paint)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(paint->window);
    sfCircleShape* point = sfCircleShape_create();

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (mousePos.y > 167) {
            sfCircleShape_setRadius(point, paint->brushSize / 2);
            sfCircleShape_setFillColor(point, paint->brushColor);
            sfCircleShape_setPosition(point, (sfVector2f)
                {mousePos.x - paint->brushSize / 2,
                    mousePos.y - paint->brushSize / 2});
            sfRenderTexture_drawCircleShape(paint->renderTexture, point, NULL);
            sfCircleShape_destroy(point);
        }
    }
}
