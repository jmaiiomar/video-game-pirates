#include<SDL/SDL.h>
#include"game.h"
void zoom(game g,SDL_Surface *ecran){
SDL_Surface *rotation = NULL,*p=NULL;
SDL_Rect rect,rect1,pos;
pos.x=g.c.positionCamera.x*1.5;
pos.y=g.c.positionCamera.y*1.5;
pos.w=g.c.positionCamera.w;
pos.h=g.c.positionCamera.h;
rect.x=0;
rect.y=0;
rect1.x=200;
rect1.y=200;
rotation=rotozoomSurface(g.b.fond,0,1.5, 1);
p=rotozoomSurface(g.p.joueur[0],0,1.5, 1);
SDL_BlitSurface(rotation ,&pos, ecran, &rect); 
SDL_BlitSurface(p,NULL, ecran, &rect1);
SDL_Flip(ecran);
SDL_Delay(5000);
SDL_FreeSurface(rotation);
SDL_FreeSurface(p); 
}
void angle(game g,SDL_Surface *ecran,double angle){
SDL_Surface *rotation = NULL,*p=NULL;
SDL_Rect rect,rect1,pos;
pos.x=g.c.positionCamera.x;
pos.y=g.c.positionCamera.y;
pos.w=g.c.positionCamera.w;
pos.h=g.c.positionCamera.h;
rect.x=0;
rect.y=0;
rect1.x=200;
rect1.y=200;
rotation=rotozoomSurface(g.b.fond,angle,1,1);
p=rotozoomSurface(g.p.joueur[0],0,1, 1);
SDL_BlitSurface(rotation ,&pos, ecran, &rect); 
SDL_BlitSurface(p,NULL, ecran, &rect1);
SDL_Flip(ecran);
SDL_Delay(5000);
SDL_FreeSurface(rotation);
SDL_FreeSurface(p); 
}
