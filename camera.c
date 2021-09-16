#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include "camera.h"




void DeplacerCamera (camera *c,SDL_Rect position )
{
  c->positionCamera.x = position.x ;
  c->positionCamera.y = position.y  ;
c->positionCamera.h=800;
c->positionCamera.w=800;
}


