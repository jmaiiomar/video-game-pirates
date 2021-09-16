#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
typedef struct enigme
{
	SDL_Rect posQ,posR1,posR2,posR3;
	SDL_Surface *Q,*R1,*R2,*R3;
	int solution;
	
}enigme;

void init_enigme(enigme e[],int n);
int resolution_enigme(enigme e,int n,SDL_Event event,int *reponse);
int generation_enigme(int tab[],int n);
int affichage_enigme(enigme e[],SDL_Surface *ecran,int tab[],int n);
void init_tableau(int tab[],int n);
int anul_doublon(int nbr_aleatoire,int tab[],int n);

#endif // ENIGME_H_INCLUDED
