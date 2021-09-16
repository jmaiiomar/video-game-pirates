#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
struct camera
{
   SDL_Rect positionCamera ;

}; typedef struct camera camera ;


void DeplacerCamera(camera *c, SDL_Rect position);






#endif // CAMERA_H_INCLUDED
