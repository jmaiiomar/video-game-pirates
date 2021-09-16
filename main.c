#include "level1.c"
#include "game.c"
#include "player.c"
#include "background.c"
#include "camera.c"
#include "collision.c"
#include "collision.h"
#include "enigme.c"
#include "score.c"
void main(){
SDL_Surface *ecran=NULL;
SDL_Init(SDL_INIT_VIDEO);
TTF_Init();
ecran=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE | SDL_DOUBLEBUF |SDL_RESIZABLE);
level1(ecran);
SDL_Quit();
TTF_Quit();
}
