#include<SDL/SDL.h>
#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL_mixer.h>
#include<SDL/SDL_image.h>
#include"saut.h"
#include "player.h"

void saut0 (player *p,saut *jump)
{
    if(!jump->j)
   { p->pos.y+=jump->v_saut;
        jump->j=1;}
   // jump->v_y=jump->v_grav;
   /*if(p->pos.y>p->fen->h)
        jump->v_y=jump->v_saut;*/
}


void saut1 (player *p,saut *jump)
{       if(jump->j)
   { p->pos.y-=jump->v_saut;
   jump->j=0;}

   // jump->v_y=jump->v_grav;
   /*if(p->pos.y>p->fen->h)
        jump->v_y=jump->v_saut;*/
}

