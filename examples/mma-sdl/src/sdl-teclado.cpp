/* MODEL */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-teclado.hpp"

SDLTeclado::SDLTeclado(){
	this->state = SDL_GetKeyboardState(nullptr);
}

void SDLTeclado::atualiza_teclado(){
    SDL_PumpEvents(); // atualiza teclado
}
