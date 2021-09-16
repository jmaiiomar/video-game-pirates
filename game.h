#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "player.h"
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include "background.h"
#include "camera.h"
#include "collision.h"
#include "enigme.h"
#include "score.h"
#include "acc.h"
#include "saut.h"
struct game {
player p;
background b;
score s;
SDL_Surface *collisionMap,*letter,*plaque;
camera c;
int gameover;
int tab[4];
enigme e[10];
};
typedef struct game game; 
void init_game(game *g);
void input(SDL_Event event,int tab_keys[]);
void display(game *g, SDL_Surface *ecran,int *q);
void update (game *g,int tab_keys[],SDL_Surface *ecran,SDL_Event *event1,speed *sp,saut *jump);
#endif // GAME_H_INCLUDED
