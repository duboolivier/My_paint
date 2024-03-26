/*
** EPITECH PROJECT, 2024
** mypaint
** File description:
** colors.c
*/

#include "paint.h"

void handle_red(paint_t *paint)
{
    if (!paint->eraserClicked)
        paint->brushColor = sfRed;
    paint->tempColor = sfRed;
}

void handle_yellow(paint_t *paint)
{
    if (!paint->eraserClicked)
        paint->brushColor = sfYellow;
    paint->tempColor = sfYellow;
}

void handle_blue(paint_t *paint)
{
    if (!paint->eraserClicked)
        paint->brushColor = sfBlue;
    paint->tempColor = sfBlue;
}

void handle_green(paint_t *paint)
{
    if (!paint->eraserClicked)
        paint->brushColor = sfGreen;
    paint->tempColor = sfGreen;
}

void handle_black(paint_t *paint)
{
    if (!paint->eraserClicked)
        paint->brushColor = sfBlack;
    paint->tempColor = sfBlack;
}
