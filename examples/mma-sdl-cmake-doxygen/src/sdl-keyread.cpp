/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>
#include <memory>

/* header file dessa classe e de outras que ela usa */
#include "../include/sdl-keyread.hpp"
#include "../include/dinamicos.hpp"
#include "../include/sdl-keystate.hpp"

/* o construtor da classe incializa o estado do teclado */
SDLKeyRead::SDLKeyRead(Dinamicos &dynamics, SDLKeyState &sdlkeystate):
    dynamics(dynamics),
    sdlkeystate(sdlkeystate)
    {
        sdlkeystate.set_state(SDL_GetKeyboardState(nullptr)); /* inicializa o teclado */
    }

/* atualiza a leitura do teclado */
void SDLKeyRead::update(){
    SDL_PumpEvents();
}

/* decide o que fazer com base no que ele leu de entrada */
void SDLKeyRead::polling(){
    const float forcaext = 20; /* essa eh a forca externa que iremos aplicar */

	/* caso seta para cima aplicamos uma forca externa no sentido para cima */
    if (sdlkeystate.get_arrow_up()){
        dynamics.set_fext(forcaext);
    }

    /* caso seta para baixo aplicamos uma forca externa no sentido para baixo */
    else if (sdlkeystate.get_arrow_down()){
        dynamics.set_fext(-forcaext);
    }

    /* caso em que nao acionamos a setas, nao aplicamos uma forca externa */
    else dynamics.set_fext(0);
}

/* decisao do que fazer para um evento discreto */
void SDLKeyRead::eventos(){
	SDL_PollEvent(sdlkeystate.get_event()); /* checa se houve um evento */
    
    /* se for o de fechar a janela ele encerra o SDL */
    if (sdlkeystate.get_event_type() == SDL_QUIT) {
        exit(0);
    }
}