#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_audio.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include"background.h"
#include"camera.h"


void initbackground(background *b) 
{ 
 	b->fond=IMG_Load("map1.png");
 	b->pos.x=0; 
 	b->pos.y=0; 
 }
 
 

  
void display_background( background *b , SDL_Surface *ecran ,camera c)
 {

	SDL_BlitSurface(b->fond,&(c.positionCamera),ecran,&b->pos);
	//SDL_Flip(ecran); 
 }

void freebackground(background *b)
{
	SDL_FreeSurface(b->fond); 

}

 
