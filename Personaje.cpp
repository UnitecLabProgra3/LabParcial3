#include "Personaje.h"

Personaje::Personaje(int x,int y,SDL_Surface*imagen)
{
    this->x=x;
    this->y=y;
    this->imagen=imagen;
}

void Personaje::dibujar(SDL_Surface*screen)
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x*75;
    offset.y = y*75;

    //Blit
    SDL_BlitSurface( imagen, NULL, screen, &offset );
}

Personaje::~Personaje()
{
    //dtor
}
