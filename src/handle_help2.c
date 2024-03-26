/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_help2.c
*/

#include "paint.h"

void handle_help2(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int help2X = paint->windowWidth - 212;
    const int help2Y = 52;
    const sfVector2i mousePos = paint->mousePos;

    if (paint->helpClicked) {
        if (mousePos.x >= help2X &&
            mousePos.x <= (help2X + iconWidth) &&
            mousePos.y >= help2Y &&
            mousePos.y <= (help2Y + iconHeight)) {
            paint->help2Clicked = !paint->help2Clicked;
            paint->aboutClicked = sfFalse;
        }
    }
}
