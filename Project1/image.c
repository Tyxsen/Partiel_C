#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>

#include "windowsInit.h"
#include "image.h"
#include "draw.h"

// Charger une texture a partir d'un fichier image
SDL_Texture* loadImage(const char* path) {
    SDL_Surface* surface = IMG_Load(path);
    if (!surface) {
        printf("Failed to load image %s! SDL_image Error: %s\n",
            path, IMG_GetError());
        return NULL;
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    if (!texture) {
        printf("Failed to create texture from %s! SDL Error: %s\n",
            path, SDL_GetError());
    }

    SDL_FreeSurface(surface);
    return texture;
}

// Charger toutes les textures necessaires
void loadImages() {
    playerSnake.texture = loadImage("..\\images\\serpent.png");
}

// Initialiser les images avec leurs positions et vitesses initiales
void initImages() {
    // Initialiser la premiere image
    playerSnake.position.x = snakePosX;
    playerSnake.position.y = snakePosY;
    playerSnake.position.w = snakeWidth;
    playerSnake.position.h = snakeHeight;
}

SDL_Texture* loadTexture(const char* path) {
    SDL_Surface* surface = IMG_Load(path);
    if (!surface) {
        printf("Failed to load image %s! SDL_image Error: %s\n",
            path, IMG_GetError());
        return NULL;
    }

    SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
    if (!texture) {
        printf("Failed to create texture from %s! SDL Error: %s\n",
            path, SDL_GetError());
    }

    SDL_FreeSurface(surface);
    return texture;
}

void loadAndRenderImage(const char* imagePath, int width,
    int height) {
    SDL_Texture* texture =
        loadTexture(imagePath);
    if (!texture) {
        return;
    }

    SDL_Rect destRect = { width, height };

    SDL_RenderCopy(renderer, texture, NULL, &destRect);
    SDL_DestroyTexture(texture);
}
