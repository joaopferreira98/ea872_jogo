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
    /* BO, o comando comentado funciona, mas ai nao conseguimos setar uma forca qualquer */
    //this->forcaext = 20; 
    forcaext = dynamics->get_fext(); // essa variavel eh o problema
}
	
//nessa funcao quando cai no caso "else" ele zera e depois nao recupero o valor da forca externa setado na main
void SDLEvents::polling(){
	// caso seta para cima aplicamos uma forca externa no sentido para cima
    if (sdltec->state[SDL_SCANCODE_UP]){
        dynamics->set_fext(forcaext);
    }
    // caso seta para baixo aplicamos uma forca externa no sentido para baixo
    else if (sdltec->state[SDL_SCANCODE_DOWN]){
        dynamics->set_fext(-forcaext);
    }
    // caso em que nao acionamos a setas, nao aplicamos uma forca externa
    else dynamics->set_fext(0);
}

void SDLEvents::eventos(){
	SDL_PollEvent(&evento);
    
    if (evento.type == SDL_QUIT) {
        exit(0);
    }
}