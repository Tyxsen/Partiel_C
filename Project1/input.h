#ifndef INPUT_H
#define INPUT_H

#include <SDL.h>
#include <stdbool.h>

extern SDL_Event event;

// definition des variables d'input
bool zPressed;
bool sPressed;
bool qPressed;
bool dPressed;

void input();
void switchTrue();
void switchFalse();

#endif
