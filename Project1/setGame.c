#include <stdio.h>
#include <stdlib.h>

#include "setGame.h"
#include "windowsInit.h"


int rectangleWidth = 40;
int rectangleHeight = 250;
int rightRectanglePosH = 1000;
int rightRectanglePosV = 375;
int leftRectanglePosH = 50;
int leftRectanglePosV = 375;

int x = 525;
int y = 285;
int size = 25;
int dx = 6;
int dy = 6;

int minRange = -8;
int maxRange = 8;
int excludeMin = -3;
int excludeMax = 3;

void drawSquare(x, y, size, size2) {
    // draw red square
    SDL_Rect redSquare = { x, y, size, size2 };
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &redSquare);
}