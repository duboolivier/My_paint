/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_file.c
*/

#include "paint.h"

void handle_file(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int fileX = paint->windowWidth - iconWidth - 10;
    const int fileY = 2;
    const sfVector2i mousePos = paint->mousePos;

    if (mousePos.x >= fileX &&
        mousePos.x <= fileX + iconWidth &&
        mousePos.y >= fileY &&
        mousePos.y <= fileY + iconHeight) {
        paint->fileClicked = !paint->fileClicked;
        paint->helpClicked = sfFalse;
        paint->aboutClicked = sfFalse;
        paint->help2Clicked = sfFalse;
    }
}
