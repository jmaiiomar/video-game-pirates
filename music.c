#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>
#include"music.h" 





void musique() 
{


Mix_Music *m ;




 if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{   printf("%s",Mix_GetError());
}

m=Mix_LoadMUS("c.mp3");

Mix_PlayMusic(m,-1);
 

while (1) 
{

//printf("music ") ; 


}
SDL_Quit(); 

}

