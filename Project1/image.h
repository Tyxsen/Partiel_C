#ifndef IMAGE_H
#define IMAGE_H

#include <SDL.h>
#include <SDL_image.h>

extern SDL_Renderer* renderer;

extern void loadImages();
void initImages();
void loadAndRenderImage(const char* imagePath, int width, int height);

// Structure pour stocker les informations d'une image
typedef struct {
    SDL_Texture* texture;
    SDL_Rect position;
} ImageObject;

ImageObject playerSnake;

#endif
