/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>
#include <memory>
#include "../include/dinamicos.hpp"
#include "../include/sdl-teclado.hpp"

/* header file dessa classe */
#include "../include/sdl-events.hpp"

/* o construtor da classe incializa o estado do teclado */
SDLEvents::SDLEvents(shared_ptr<Dinamicos> dynamics, shared_ptr<SDLTeclado> sdltec):
    dynamics(dynamics),
    sdltec(sdltec)
    {
    f = dynamics->get_fext();
    forcaext = 10.0; // forca estabelecida por nos, por enquanto.
}
	

void SDLEvents::polling(){
	if (sdltec->state[SDL_SCANCODE_UP]){
        f += forcaext;
        dynamics->set_fext(f);
    }
    if (sdltec->state[SDL_SCANCODE_DOWN]){
        f -= forcaext;
        dynamics->set_fext(f);
    }
}

/*void SDLEvents::eventos(){
	while (SDL_PollEvent(&evento)) {
        if (evento.type == SDL_QUIT) {
            rodando = false;
        }
    }
}*/