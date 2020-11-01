/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>

/* header file dessa classe e de outras que ela usa */
#include "../include/sdl-keyread.hpp"
#include "../include/sdl-keystate.hpp"
#include "../include/sdl-position.hpp"

/* o construtor da classe incializa o estado do teclado */
SDLKeyRead::SDLKeyRead(SDLKeyState &sdlkeystate, SDLPosition &sdlpos):
    sdlkeystate(sdlkeystate),
    sdlpos(sdlpos)
{
    sdlkeystate.set_state(SDL_GetKeyboardState(nullptr)); /* inicializa o teclado */
}

/* atualiza a leitura do teclado */
void SDLKeyRead::update(){
    SDL_PumpEvents();
}

/* decide o que fazer com base no que ele leu de entrada */
void SDLKeyRead::polling(){
    const float passo = 10; /* o quanto a nave anda ao pressionar o teclado */

	/* caso seta para cima movimentamos a nave pra cima */
    if (sdlkeystate.get_arrow_up()){
        sdlpos.set_position(sdlpos.get_pix_x(), sdlpos.get_pix_y() - passo);
    }

    /* caso seta para baixo movimentamos a nave pra baixo */
    else if (sdlkeystate.get_arrow_down()){
        sdlpos.set_position(sdlpos.get_pix_x(), sdlpos.get_pix_y() + passo);
    }

    /* caso seta para esquerda movimentamos a nave pra esquerda */
    else if (sdlkeystate.get_arrow_left()){
        sdlpos.set_position(sdlpos.get_pix_x() - passo, sdlpos.get_pix_y());
    }

    /* caso seta para direita movimentamos a nave pra direita */
    else if (sdlkeystate.get_arrow_right()){
        sdlpos.set_position(sdlpos.get_pix_x() + passo, sdlpos.get_pix_y());
    }

    /* caso acionada tecla espaco a nave atira */
    else if (sdlkeystate.get_key_space()){
        /* assim que definirmos os modelos */
    }
}

/* decisao do que fazer para um evento discreto */
void SDLKeyRead::eventos(){
	SDL_PollEvent(sdlkeystate.get_event()); /* checa se houve um evento */
    
    /* se for o de fechar a janela ele encerra o SDL */
    if (sdlkeystate.get_event_type() == SDL_QUIT) {
        exit(0);
    }
}