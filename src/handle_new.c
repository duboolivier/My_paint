/*
** EPITECH PROJECT, 2024
** re
** File description:
** set
*/

#include "paint.h"

static
void reset_app(paint_t *paint)
{
    paint->brushColor = sfBlack;
    paint->brushSize = 5;
    paint->eraserClicked = sfFalse;
    sfRenderTexture_clear(paint->renderTexture, sfWhite);
    sfRenderTexture_display(paint->renderTexture);
}

void handle_new(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 2;
    const sfVector2i mousePos = paint->mousePos;

    if (paint->fileClicked) {
        if (mousePos.x >= startX &&
            mousePos.x <= (startX + iconWidth) &&
            mousePos.y >= startY &&
            mousePos.y <= (startY + iconHeight)) {
            reset_app(paint);
        }
    }
}
