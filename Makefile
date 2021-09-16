prog:main.o level1.o background.o player.o score.o enigme.o collision.o camera.o game.o zoom.o menu.o acc.o saut.o
	gcc main.o -o prog -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -lSDL_gfx -g 

main.o:main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
level1.o:level1.c
	gcc -c level1.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
background.o:background.c
	gcc -c background.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
player.o:player.c
	gcc -c player.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
score.o:score.c
	gcc -c score.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
enigme.o:enigme.c
	gcc -c enigme.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
collision.o:collision.c
	gcc -c collision.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
camera.o:camera.c
	gcc -c camera.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
game.o:game.c
	gcc -c game.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
zoom.o:zoom.c
	gcc -c zoom.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
menu.o:menu.c
	gcc -c menu.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
acc.o:acc.c
	gcc -c acc.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
saut.o:saut.c
	gcc -c saut.c -lSDL -lSDL_image -lSDL_ttf -lSD_mixer -lSDL_gfx -g
