/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_size_change.c
*/

#include "paint.h"

void handle_size_change(paint_t *paint)
{
    const int iconSize = 96;
    const int startY = 28;
    const int smallX = 535;
    const int mediumX = smallX + 146;
    const int largeX = smallX + 292;
    const sfVector2i mousePos = paint->mousePos;

    if (mousePos.x >= smallX && mousePos.x <= (smallX + iconSize) &&
        mousePos.y >= startY && mousePos.y <= (startY + iconSize)) {
        paint->brushSize = 5;
    }
    if (mousePos.x >= mediumX && mousePos.x <= (mediumX + iconSize) &&
        mousePos.y >= startY && mousePos.y <= (startY + iconSize)) {
        paint->brushSize = 15;
    }
    if (mousePos.x >= largeX && mousePos.x <= (largeX + iconSize) &&
        mousePos.y >= startY && mousePos.y <= (startY + iconSize)) {
        paint->brushSize = 30;
    }
}
