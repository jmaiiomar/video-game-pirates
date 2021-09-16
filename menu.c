#include "game.h"
void save_game(game g){
FILE *f=NULL;
f=fopen("save.txt","w");
fprintf(f,"%d %d %d %d %d\n",g.p.pos.x,g.p.pos.y,g.c.positionCamera.x,g.c.positionCamera.y,g.s.nbr_de_vie);
fclose(f);
}
/*void load_game(game *g){
FILE *f=NULL;
f=fopen("save.txt","r");
fscanf(f,"%d %d %d %d %d\n",&(g->p.pos.x),&(g->p.pos.y),&(g->c.positionCamera.x),&(g->c.positionCamera.y),&(g->s.nbr_de_vie));
fclose(f);
}*/
