#include<stdlib.h>
#include<stdio.h> 
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>
#include <time.h>
#include <math.h>
#include"acc.h"
void  Acceleration(speed *sp)
{ 
    if( sp->s <= 5 && sp->runing )
    {
        if(SDL_GetTicks() - sp->s_tick > 250 )
        {
            sp->s += 1 ;
            sp->s_tick = SDL_GetTicks();
        }
        if(sp->s==5)
        sp->runing=0;

    }
//printf("%d",sp->s);
}

void Decceleration(speed *sp)
{ 
    if( sp->s > 2 && !sp->runing )
    {
        if(SDL_GetTicks() - sp->s_tick > 250 )
        {
            sp->s -= 1 ;
            sp->s_tick = SDL_GetTicks();
        }
        if(sp->s<=2)
        sp->runing=1;

    }

}



