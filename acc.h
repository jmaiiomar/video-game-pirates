#ifndef ACC_H_INCLUDED
#define ACC_H_INCLUDED
#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>

struct speed{
int runing ;
int s  ; 
int  s_tick ;   
};typedef  struct  speed   speed; 

void Decceleration(speed *sp); 
void Acceleration(speed *sp); 


#endif // FONCTION_H_INCLUDED


