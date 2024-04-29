#include <stdio.h>

#include "movement.h"
#include "windowsInit.h"
#include "draw.h"
#include "image.h"
#include "input.h"

int vitesse = 10;

MovementFunctions snakeMovement = { moveSnakeUp, moveSnakeDown,
    moveSnakeLeft, moveSnakeRight };

void moveSnakeUp() {
    if (snakePosY > 0) {
        snakePosY -= vitesse;
        playerSnake.position.y -= vitesse;
    }
}

void moveSnakeDown() {
    if (snakePosY < windowHeight - snakeHeight) {
        snakePosY += vitesse;
        playerSnake.position.y += vitesse;
    }
}

void moveSnakeLeft() {
    if (snakePosX > 0) {
        snakePosX -= vitesse;
        playerSnake.position.x -= vitesse;
    }
}

void moveSnakeRight() {
    if (snakePosX < windowWidth - snakeWidth) {
        snakePosX += vitesse;
        playerSnake.position.x += vitesse;
    }
}

void movement() {

    if (zPressed && !sPressed) {
        moveSnakeUp();
    }
    else if (!zPressed && sPressed) {
        moveSnakeDown();
    }

    if (qPressed && !dPressed) {
        moveSnakeLeft();
    }
    else if (!qPressed && dPressed) {
        moveSnakeRight();
    }
}