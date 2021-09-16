#include "player.h"
#include "game.h"
//#include "collision.h"
#include<SDL/SDL.h>
#include<stdio.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_rotozoom.h>
#include <stdbool.h>
#include<stdlib.h>
#include "enigme.h"
#include "zoom.c"
#include"acc.h"
#include "acc.c"
#include "saut.h"
#include "saut.c"
void init_game(game *g){
char joueure[20];
int n=4,i;
char vie[50];
init_player(&(g->p),joueure);
initbackground(&(g->b));
init_enigme(g->e,n);
init_score(&(g->s),vie);
g->collisionMap = IMG_Load("mapr.png");
g->letter=IMG_Load("letter.png");
g->plaque=IMG_Load("plaque.png");
g->gameover=0;
for(i=0;i<n;i++){
g->tab[i]=-1;
}
}
void input(SDL_Event event,int tab_keys[]){
switch (event.type){
case SDL_KEYDOWN :
tab_keys[event.key.keysym.sym]=1;
break;
case SDL_KEYUP :
tab_keys[event.key.keysym.sym]=0;
break;
}
}
void display(game *g, SDL_Surface *ecran,int *q){
int i,temp_actuel,temp_prec,compteur=30;
SDL_Rect pos;
pos.x=300;
pos.y=150;
display_background(&(g->b),ecran,g->c);
if((g->s.nbr_de_vie)==3){

affichage_score0(&g->s,ecran,q);

}
/*if((g->s.nbr_de_vie)==0){
affichage_score0(&g->s,ecran);
affichage_score1(&g->s,ecran );
/*affichage_score2(&g->s,ecran );
affichage_score3(&g->s,ecran );*/
//}*/
if((g->s.nbr_de_vie)==2){
affichage_score1(&g->s,ecran,q);

}
if((g->s.nbr_de_vie)==1){

affichage_score2(&g->s,ecran,q);
}

if((g->s.nbr_de_vie)==0){
printf("game over");
compteur=3;
while(compteur!=0){
SDL_BlitSurface(g->plaque,NULL,ecran,&pos);
temp_actuel=SDL_GetTicks();
if((temp_actuel-temp_prec)>=1000){
compteur--;
temp_prec=temp_actuel;

}
//g->gameover=0;
//init_game(g);
//SDL_Flip(ecran);

}
init_game(g);
}
blit(&(g->p),ecran,i);
SDL_Flip(ecran);
//DeplacerCamera (&(g->c),g->p.pos);
}
void update (game *g,int tab_keys[],SDL_Surface *ecran,SDL_Event *event1,speed *sp,saut *jump){
int reponse=-1,direction=0;
SDL_Event event;
int compteur1=30,compteur,temp_prec=0,temp_actuel=0,temp_prec1=0,temp_actuel1=0,degre=0;
char temp[50];
SDL_Color noire={0,0,0};
SDL_Color blanc={255,255,255};
TTF_Font *police=NULL;
SDL_Surface *texte=NULL;
police=TTF_OpenFont("arial.ttf",30);
int v=0;
int ax=0;
//int tab[10];
SDL_Rect pos;
pos.x=300;
pos.y=150;
int n=4;
SDL_Color color;
if(tab_keys[SDLK_z]==1){
zoom(*g,ecran);
}
if(tab_keys[SDLK_w]==1){
degre+=20;
angle(*g,ecran,degre);
}
if(tab_keys[SDLK_LEFT]==1){

direction=3;
v=sp->s;
}
  if(tab_keys[SDLK_RIGHT]==1){

direction=4;
v=sp->s;
}
 if(tab_keys[SDLK_UP]==1){

direction=1;
v=sp->s;
}
 if(tab_keys[SDLK_DOWN]==1){

direction=2;
v=sp->s;
}
if(tab_keys[SDLK_LSHIFT]==1){

Acceleration(sp);

}
else 
Decceleration(sp);
if(tab_keys[SDLK_o]==1){

saut0(&g->p,jump);

}
else 
saut1(&g->p,jump);
if((tab_keys[SDLK_a]==1)&& (direction!=0))
v=5;
if(!collisionmap(direction,g->p.pos,g->collisionMap)){
switch (direction){
case 1 :
deplacer_player_up(&(g->p),v);
break;
case 2 :
deplacer_player_down(&(g->p),v);
break;
case 3 :
deplacer_player_left(&(g->p),v);
break;
case 4 :
deplacer_player_right(&(g->p),v);
break;
default :
break;
}
}
if(collisionmap_enigme1 (direction,g->p.pos,g->collisionMap)){
compteur=5;
while(compteur!=0){
SDL_BlitSurface(g->letter,NULL,ecran,&pos);
temp_actuel=SDL_GetTicks();
if((temp_actuel-temp_prec)>=1000){
compteur--;
temp_prec=temp_actuel;

}

SDL_Flip(ecran);

}
}
if(collisionmap_enigme (direction,g->p.pos,g->collisionMap)){
ax=affichage_enigme(g->e,ecran,g->tab,n);
printf("%d\n",ax);
//printf("%d %d %d %d ",g->tab[0],g->tab[1],g->tab[2],g->tab[3]);
while((compteur1!=0)&&(reponse==-1)){
temp_actuel1=SDL_GetTicks();
if((temp_actuel1-temp_prec1)>=1000){
compteur1--;
temp_prec1=temp_actuel1;
}
sprintf(temp,"il vous reste %d sec",compteur1);
texte=TTF_RenderText_Shaded(police,temp,noire,blanc);
SDL_BlitSurface(texte,NULL,ecran,&pos);
SDL_PollEvent(&event);
if(resolution_enigme(g->e[0],n,event,&reponse)==0){
if((reponse!=-1)||(compteur1==0)){
g->s.nbr_de_vie--;
}
}
SDL_Flip(ecran);
//break;
}
event1->type=SDL_KEYUP;
}
if(collisionmap_mort (direction,g->p.pos,g->collisionMap)){
g->s.nbr_de_vie--;
event1->type=SDL_KEYUP;
}
TTF_CloseFont(police);
SDL_FreeSurface(texte);
DeplacerCamera (&(g->c),g->p.pos);
}
