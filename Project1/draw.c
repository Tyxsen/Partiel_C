#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "movement.h"
#include "draw.h"
#include "image.h"
#include "windowsInit.h"

int snakeWidth = 150;
int snakeHeight = 150;
int snakePosX = 450;
int snakePosY = 350;

void drawSnake() {
    SDL_RenderCopy(renderer, playerSnake.texture, NULL, &playerSnake.position);
}