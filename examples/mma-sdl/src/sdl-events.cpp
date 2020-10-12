/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <iostream>
#include <SDL2/SDL.h>
#include <../include/sdl-position.hpp>

/* header file dessa classe */
#include "../include/sdl-events.hpp"

/* o construtor da classe incializa o estado do teclado */
SDLEvents::SDLEvents(shared_ptr<SDLPosition> pixposition):
    pixposition(pixposition)
    {
    this->state = SDL_GetKeyboardState(nullptr);
    rodando = true;
}
	

void SDLEvents::polling(){
	while(rodando){
		SDL_PumpEvents(); // atualiza estado do teclado
		if (state[SDL_SCANCODE_UP])  pixposition->get_pix_y()-= 1;
    	if (state[SDL_SCANCODE_DOWN])pixposition->get_pix_y()+= 1;
   		while(SDL_PollEvent(&evento) != 0){
	    	if (evento.type == SDL_QUIT) {
			    rodando = false;
			}
		}
	}
}