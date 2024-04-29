#include "input.h"
#include "movement.h"
#include "draw.h"

// Initialisation des variables d'input sur false
bool zPressed = false;
bool sPressed = false;
bool qPressed = false;
bool dPressed = false;

void switchTrue() {
    switch (event.key.keysym.sym) {
    case SDLK_z:
        zPressed = true;
        break;
    case SDLK_s:
        sPressed = true;
        break;
    case SDLK_q:
        qPressed = true;
        break;
    case SDLK_d:
        dPressed = true;
        break;
    }
}

void switchFalse() {
    switch (event.key.keysym.sym) {
    case SDLK_z:
        zPressed = false;
        break;
    case SDLK_s:
        sPressed = false;
        break;
    case SDLK_q:
        qPressed = false;
        break;
    case SDLK_d:
        dPressed = false;
        break;
    }
}

void input() {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_KEYDOWN) {
            switchTrue();
        }
        else if (event.type == SDL_KEYUP) {
            switchFalse();
        }
    }
    movement();
}
