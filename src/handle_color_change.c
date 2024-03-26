/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_color_change.c
*/

#include "paint.h"

static
void handle_color_change2(paint_t *paint)
{
    const sfVector2i mousePos = paint->mousePos;
    const int colorSize = 48;
    const int colorY = 52;
    const int colorRedX = 1053;
    const int colorGreenX = colorRedX + 75;
    const int colorBlackX = colorRedX + 300;

    if (mousePos.x >= colorGreenX && mousePos.x <= (colorGreenX + colorSize) &&
        mousePos.y >= colorY && mousePos.y <= (colorY + colorSize))
        handle_green(paint);
    if (mousePos.x >= colorBlackX && mousePos.x <= (colorBlackX + colorSize) &&
        mousePos.y >= colorY && mousePos.y <= (colorY + colorSize))
        handle_black(paint);
}

void handle_color_change(paint_t *paint)
{
    const sfVector2i mousePos = paint->mousePos;
    const int colorSize = 48;
    const int colorY = 52;
    const int colorRedX = 1053;
    const int colorBlueX = colorRedX + 150;
    const int colorYellowX = colorRedX + 225;

    if (mousePos.x >= colorRedX && mousePos.x <= (colorRedX + colorSize) &&
        mousePos.y >= colorY && mousePos.y <= (colorY + colorSize))
        handle_red(paint);
    if (mousePos.x >= colorYellowX &&
        mousePos.x <= (colorYellowX + colorSize) &&
        mousePos.y >= colorY && mousePos.y <= (colorY + colorSize))
        handle_yellow(paint);
    if (mousePos.x >= colorBlueX && mousePos.x <= (colorBlueX + colorSize) &&
        mousePos.y >= colorY && mousePos.y <= (colorY + colorSize))
        handle_blue(paint);
    handle_color_change2(paint);
}
