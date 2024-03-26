/*
** EPITECH PROJECT, 2024
** paint
** File description:
** pointk
*/

#ifndef PAINT_H_
    #define PAINT_H_
    #define OK 0
    #define KO 84

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <stdlib.h>

typedef struct paint_s {
    sfRenderWindow *window;
    sfRenderTexture *renderTexture;
    sfVector2i mousePos;
    int windowWidth;
    int brushSize;
    sfColor brushColor;
    sfColor tempColor;
    sfBool eraserClicked;
    sfBool fileClicked;
    sfBool helpClicked;
    sfBool aboutClicked;
    sfBool help2Clicked;
} paint_t;

void create_window(paint_t *paint);

void display_texture(sfRenderWindow *window,
    const char *imagePath, float x, float y);
void display_tools(sfRenderWindow *window, float startX, float startY);
void display_sizes(sfRenderWindow *window, float startX, float startY);
void display_colors(sfRenderWindow *window, float startX, float startY);
void display_buttons(paint_t *paint);
void display_file_options(paint_t *paint);
void display_help_options(paint_t *paint);
void display_credits(paint_t *paint);
void display_instructions(paint_t *paint);
void display_line(paint_t *paint, int y);

void handle_events(paint_t *paint);
void handle_tool_change(paint_t *paint);
void handle_size_change(paint_t *paint);
void handle_color_change(paint_t *paint);
void handle_red(paint_t *paint);
void handle_yellow(paint_t *paint);
void handle_blue(paint_t *paint);
void handle_green(paint_t *paint);
void handle_black(paint_t *paint);
void handle_file(paint_t *paint);
void handle_help(paint_t *paint);
void handle_new(paint_t *paint);
void handle_save(paint_t *paint);
void handle_about(paint_t *paint);
void handle_help2(paint_t *paint);
void handle_drawing(paint_t *paint);

#endif
