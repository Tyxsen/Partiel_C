#ifndef MOVEMENT_H
#define MOVEMENT_H

extern int vitesse;

void movement();

//fonction de mouvement du vaisseau
void moveSnakeUp();
void moveSnakeDown();
void moveSnakeLeft();
void moveSnakeRight();

//structure pointeur de fonction O_O
typedef struct {
    void (*up)();
    void (*down)();
    void (*left)();
    void (*right)();
} MovementFunctions;
extern MovementFunctions snakeMovement;

#endif