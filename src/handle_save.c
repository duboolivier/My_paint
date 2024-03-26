/*
** EPITECH PROJECT, 2024
** sa
** File description:
** ve
*/

#include "paint.h"

static
void save_image(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int startX = paint->windowWidth - 212;
    const int startY = 102;
    const sfTexture* texture;
    sfImage* image;
    const sfVector2i mousePos = paint->mousePos;

    if (mousePos.x >= startX &&
        mousePos.x <= (startX + iconWidth) &&
        mousePos.y >= startY &&
        mousePos.y <= (startY + iconHeight)) {
        texture = sfRenderTexture_getTexture(paint->renderTexture);
        image = sfTexture_copyToImage(texture);
        if (image) {
            sfImage_saveToFile(image, "./saved_drawing.jpg");
            sfImage_destroy(image);
        }
    }
}

void handle_save(paint_t *paint)
{
    if (paint->fileClicked)
        save_image(paint);
}
