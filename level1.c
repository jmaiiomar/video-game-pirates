#include "game.h"
#include "player.h"
#include "background.h"
#include "camera.h"
#include "collision.h"
#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include <SDL/SDL_rotozoom.h>
//#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include "score.h"
#include "acc.h"
#include "music.c"
#include "saut.h"
void level1 (SDL_Surface *ecran);
void level1 (SDL_Surface *ecran){
int tab_keys[322]={0};
game g;
speed sp;
saut jump;
sp.s=1;
sp.s_tick=0;
sp.runing=1;
jump.j=0;
jump.v_saut=-15;
SDL_Event event;
int j,q=50;
init_game(&g);
while(g.gameover==0){
//musique();
SDL_PollEvent(&event);
switch(event.type){
case SDL_QUIT :
g.gameover=1;
break;
}
input(event,tab_keys);
update(&g,tab_keys,ecran,&event,&sp,&jump);
//SDL_BlitSurface(collisionMap,NULL,ecran,&pos);
display(&g,ecran,&q);
}
}
