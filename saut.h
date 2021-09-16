#ifndef SAUT_H_INCLUDED
#define SAUT_H_INCLUDED
#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include "player.h"
struct saut {

int j ; 
int v_saut   ; 

};typedef  struct  saut  saut  ; 

void saut0 (player *p,saut *jump) ; 
void saut1 (player *p,saut *jump) ; 

#endif // FONCTION_H_INCLUDED


