/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** handle_tool_change.c
*/

#include "paint.h"

static
void tool_eraser(paint_t *paint)
{
    paint->tempColor = paint->brushColor;
    paint->brushColor = sfWhite;
    paint->eraserClicked = sfTrue;
}

static
void tool_pen(paint_t *paint)
{
    paint->eraserClicked = sfFalse;
    paint->brushSize = 3;
    paint->brushColor = paint->tempColor;
}

static
void tool_brush(paint_t *paint)
{
    paint->eraserClicked = sfFalse;
    paint->brushSize = 15;
    paint->brushColor = paint->tempColor;
}

void handle_tool_change(paint_t *paint)
{
    const int iconSize = 96;
    const int toolY = 28;
    const int penX = 28;
    const int eraserX = 146;
    const int brushX = 292;
    const sfVector2i mousePos = paint->mousePos;

    if (mousePos.x >= eraserX && mousePos.x <= (eraserX + iconSize) &&
        mousePos.y >= toolY && mousePos.y <= (toolY + iconSize)) {
        tool_eraser(paint);
    }
    if (mousePos.x >= penX && mousePos.x <= (penX + iconSize) &&
        mousePos.y >= toolY && mousePos.y <= (toolY + iconSize)) {
        tool_pen(paint);
    }
    if (mousePos.x >= brushX && mousePos.x <= (brushX + iconSize) &&
        mousePos.y >= toolY && mousePos.y <= (toolY + iconSize)) {
        tool_brush(paint);
    }
}
