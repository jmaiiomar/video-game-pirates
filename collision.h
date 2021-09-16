#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include <stdbool.h>
//bool collision(SDL_Rect* positionP, SDL_Rect* coll1);
SDL_Color GetPixel (SDL_Surface* pSurface , int x , int y);
bool collisionmap (int direction,SDL_Rect col,SDL_Surface *collisionMap);
bool collisionmap_enigme (int direction,SDL_Rect col,SDL_Surface *collisionMap);
bool collisionmap_enigme1 (int direction,SDL_Rect col,SDL_Surface *collisionMap);
bool collisionmap_mort (int direction,SDL_Rect col,SDL_Surface *collisionMap);
#endif // COLLISION_H_INCLUDED
