/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_about.c
*/

#include "paint.h"

void handle_about(paint_t *paint)
{
    const int iconWidth = 92;
    const int iconHeight = 48;
    const int aboutX = paint->windowWidth - 212;
    const int aboutY = 2;
    const sfVector2i mousePos = paint->mousePos;

    if (paint->helpClicked) {
        if (mousePos.x >= aboutX &&
            mousePos.x <= (aboutX + iconWidth) &&
            mousePos.y >= aboutY &&
            mousePos.y <= (aboutY + iconHeight)) {
            paint->aboutClicked = !paint->aboutClicked;
            paint->help2Clicked = sfFalse;
        }
    }
}
