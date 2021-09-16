#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>

struct palyer
{
int vitesse;
SDL_Rect pos;
SDL_Surface *joueur[5];
};
typedef struct palyer player;

void init_player(player *p,char joueure[]);
void deplacer_player_right(player *p,int v);
void deplacer_player_left(player *p,int v);
void deplacer_player_up(player *p,int v);
void deplacer_player_down(player *p,int v);
void free_player(player p);
void blit(player *p,SDL_Surface *ecran,int i);
int  calculerdistance(player p,int tprec);
#endif // PLAYER_H_INCLUDED
