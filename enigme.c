#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "enigme.h"

void init_enigme(enigme e[],int n)
{
char Q[10],R1[10],R2[10],R3[10];
int i=0;
FILE* f=NULL;

f=fopen("enigme.txt","r");
while(!feof(f))
{
fscanf(f," %s %s %s %s %d ",Q,R1,R2,R3,&e[i].solution);
//printf("%s %s %s %s %d ",Q,R1,R2,R3,e[i].solution);
e[i].Q=IMG_Load(Q);
e[i].R1=IMG_Load(R1);
e[i].R2=IMG_Load(R2);
e[i].R3=IMG_Load(R3);
i++;



}
fclose(f);

for(i=0;i<n;i++)
{
e[i].posQ.x=0;  
e[i].posQ.y=0; 

e[i].posR1.x=100; 
e[i].posR1.y=400; 

e[i].posR2.x=300; 
e[i].posR2.y=400; 

e[i].posR3.x=600; 
e[i].posR3.y=400; 

}

}

int anul_doublon(int nbr_aleatoire,int tab[],int n)
{
   int i;
   for(i=0;i<n;i++){
      if (tab[i]==nbr_aleatoire){
         return 0;}
}
   return 1;
}

int generation_enigme(int tab[],int n)
{
	int nbr_aleatoire=-1;
        int i;
	do
{
   nbr_aleatoire = rand()%4;
} while(!anul_doublon(nbr_aleatoire,tab,n));
for(i=0;i<n;i++){
if(tab[i]==-1){
tab[i]=nbr_aleatoire;
break;
}
}
return nbr_aleatoire;
}


int  affichage_enigme(enigme e[],SDL_Surface *ecran,int tab[],int n)
{
	int nbr_aleatoire,i=-1;
	i=generation_enigme(tab,n);
	SDL_BlitSurface(e[i].Q,NULL,ecran,&e[i].posQ);
	SDL_BlitSurface(e[i].R1,NULL,ecran,&e[i].posR1);
	SDL_BlitSurface(e[i].R2,NULL,ecran,&e[i].posR2);
	SDL_BlitSurface(e[i].R3,NULL,ecran,&e[i].posR3);
//SDL_Flip(ecran);
return i;
}

void init_tableau(int tab[],int n)
{int i;
	for(i=0;i<n;i++)
	{
		tab[i]=-1;
	}
}
int resolution_enigme(enigme e,int n,SDL_Event event,int *reponse){
switch (event.type){
case SDL_KEYDOWN :
switch(event.key.keysym.sym){
case SDLK_a:
*reponse=1;
break;
case SDLK_b:
*reponse=2;
break;
case SDLK_c:
*reponse=3;
break;
}
break;
}
if(*reponse==e.solution){
return 1;
}
else{
return 0;
}
}
