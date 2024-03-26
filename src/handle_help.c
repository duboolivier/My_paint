/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_help.c
*/

#include "paint.h"

void handle_help(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int helpX = paint->windowWidth - iconWidth - 10;
    const int helpY = 102;
    const sfVector2i mousePos = paint->mousePos;

    if (mousePos.x >= helpX &&
        mousePos.x <= helpX + iconWidth &&
        mousePos.y >= helpY &&
        mousePos.y <= helpY + iconHeight) {
        paint->helpClicked = !paint->helpClicked;
        paint->fileClicked = sfFalse;
        paint->aboutClicked = sfFalse;
        paint->help2Clicked = sfFalse;
    }
}
