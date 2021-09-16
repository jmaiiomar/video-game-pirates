
#include "collision.h"
SDL_Color GetPixel (SDL_Surface* pSurface , int x , int y)
{
    SDL_Color color;
    Uint32 col = 0 ;
    if (x >= 0 && y >= 0)
    {
        //determine position
        char* pPosition = ( char* ) pSurface->pixels ;

        //offset by y
        pPosition += ( pSurface->pitch * y ) ;

        //offset by x
        pPosition += ( pSurface->format->BytesPerPixel * x ) ;

        //copy pixel data
        memcpy ( &col , pPosition , pSurface->format->BytesPerPixel ) ;

        //convert color
    }
    SDL_GetRGB ( col , pSurface->format , &color.r , &color.g , &color.b ) ;
    return ( color ) ;
}

bool collisionmap (int direction,SDL_Rect col,SDL_Surface *collisionMap)
{
	/*if (collisionMap == NULL) 
	collisionMap = IMG_Load("map22.png");*/
    SDL_Color couleur;
col.x+=230;
col.y+=260;
    int i;
    if (direction == 3)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
	couleur = GetPixel(collisionMap, col.x - 10, i);
	if((couleur.r == 255 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 4)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
       couleur = GetPixel(collisionMap, col.x +30 /*col.w*/ + 10, i);
	if((couleur.r == 255 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 1)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y - 10);
	if((couleur.r == 255 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 2)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y +60 /*col.h*/ + 10);
	if((couleur.r == 255 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    
	return ((couleur.r == 255 && couleur.g == 0 && couleur.b == 0) );

}
bool collisionmap_enigme (int direction,SDL_Rect col,SDL_Surface *collisionMap)
{
	/*if (collisionMap == NULL) 
	collisionMap = IMG_Load("map22.png");*/
    SDL_Color couleur;
col.x+=230;
col.y+=260;
    int i;
    if (direction == 3)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
	couleur = GetPixel(collisionMap, col.x - 10, i);
	if((couleur.r == 0 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 4)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
       couleur = GetPixel(collisionMap, col.x +30 /*col.w*/ + 10, i);
	if((couleur.r == 0 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 1)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y - 10);
	if((couleur.r == 0 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 2)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y +60 /*col.h*/ + 10);
	if((couleur.r ==0 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    
	return ((couleur.r == 0 && couleur.g == 255 && couleur.b == 0) );

}

/*bool collision(SDL_Rect* coll, SDL_Rect* coll1)
{
    if (coll->y >= coll1->y + coll1->h)
        return false;
    if (coll->x >= coll1->x + coll1->w)
        return false;
    if (coll->y + coll->h <= coll1->y)
        return false;
    if (coll->x + coll->w <= coll1->x)
        return false;
    return true;
}*/
bool collisionmap_enigme1 (int direction,SDL_Rect col,SDL_Surface *collisionMap)
{
	/*if (collisionMap == NULL) 
	collisionMap = IMG_Load("map22.png");*/
    SDL_Color couleur;
col.x+=230;
col.y+=260;
    int i;
    if (direction == 3)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
	couleur = GetPixel(collisionMap, col.x - 10, i);
	if((couleur.r == 255 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 4)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
       couleur = GetPixel(collisionMap, col.x +30 /*col.w*/ + 10, i);
	if((couleur.r == 255 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 1)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y - 10);
	if((couleur.r == 255 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 2)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y +60 /*col.h*/ + 10);
	if((couleur.r ==255 && couleur.g == 255 && couleur.b == 0) )
	break;
}
    }
    
	return ((couleur.r == 255 && couleur.g == 255 && couleur.b == 0) );

}
bool collisionmap_mort (int direction,SDL_Rect col,SDL_Surface *collisionMap)
{
	/*if (collisionMap == NULL) 
	collisionMap = IMG_Load("map22.png");*/
    SDL_Color couleur;
col.x+=230;
col.y+=260;
    int i;
    if (direction == 3)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
	couleur = GetPixel(collisionMap, col.x - 10, i);
	if((couleur.r == 0 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 4)
    {
	for(i=col.y;i<(col.y +60 /*col.h*/);i++)
{
       couleur = GetPixel(collisionMap, col.x +30 /*col.w*/ + 10, i);
	if((couleur.r == 0 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 1)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y - 10);
	if((couleur.r == 0 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    else if (direction == 2)
    {
for(i=col.x;i<(col.x +30 /*col.w*/);i++)
{
        couleur = GetPixel(collisionMap, i, col.y +60 /*col.h*/ + 10);
	if((couleur.r ==0 && couleur.g == 0 && couleur.b == 0) )
	break;
}
    }
    
	return ((couleur.r == 0 && couleur.g == 0 && couleur.b == 0) );

}
