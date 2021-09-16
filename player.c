#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include"player.h"

void init_player(player *p,char joueure[])
{int i=1;
	p->pos.x=3900;
	p->pos.y=5700;
        p->pos.h=120;
        p->pos.w=88;
	p->vitesse=1;
	for(i=0;i<4;i++)
{ 
  sprintf(joueure,"%d.png",i+1);
  p->joueur[i]=IMG_Load(joueure);
}
}

void deplacer_player_right(player *p,int v)
{ 
						(p->pos.x)+=v;
                				(p->pos.y)-=v;


					
}
void deplacer_player_left(player *p,int v)
{  
	
						(p->pos.x)-=v;
                				(p->pos.y)+=v;
		

}
void deplacer_player_up(player *p,int v)
{  
						(p->pos.x)-=v;
                				(p->pos.y)-=v;


}
void deplacer_player_down(player *p,int v)
{  
	
						
						(p->pos.x)+=v;
						(p->pos.y)+=v;
					

}



void free_player(player p)
{int i;
for(i=0;i<4;i++){
	SDL_FreeSurface(p.joueur[i]);
}
}

void blit(player *p,SDL_Surface *ecran,int i)
{SDL_Rect pos;
pos.x=200;
pos.y=200;
	/*if(i=5)	
	{
		i=1;
	}*/
	for(i=0;i<4;i++)
{
	SDL_BlitSurface(p->joueur[i],NULL,ecran,&pos);
        SDL_Flip(ecran);
	/*SDL_Delay(60);*/
}	//i++;		
}
int  calculerdistance(player p,int tprec){
int dt=(SDL_GetTicks()-tprec);
printf("%d\n",dt);
return (p.vitesse)*dt;
}
