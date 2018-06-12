/*
** EPITECH PROJECT, 2018
** Infinite_World
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "engine.h"

wc_t init_window(unsigned int x, unsigned int y, char *name)
{
        wc_t win_info;
        
        win_info.v = (sfVideoMode){x, y, 32};
        win_info.w = sfRenderWindow_create(win_info.v ,name, sfClose, NULL);
        win_info.r = sfRectangleShape_create();
        sfRectangleShape_setSize(win_info.r, (sfVector2f){x, y});
        return (win_info);
}

int main(void) {
        wc_t win_info = init_window(1280, 720, "NAME");

        while (sfRenderWindow_isOpen(win_info.w)) {
                sfEvent event;
                while (sfRenderWindow_pollEvent(win_info.w, &event)) {
                        if (event.type == sfEvtClosed)
                                sfRenderWindow_close(win_info.w);
                }
                sfRenderWindow_clear(win_info.w, sfBlack);
                sfRenderWindow_display(win_info.w);
        }
        return (1);
}