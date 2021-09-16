#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_audio.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include "camera.h"
struct background {
SDL_Surface  *fond   ; 

SDL_Rect  pos  ; 
};typedef  struct    background   background  ; 

void initbackground (background *b  ); 
   
void display_background( background *b , SDL_Surface *ecran ,camera c);
void freebackground(background *b ) ; 
#endif // FONCTION_H_INCLUDED


