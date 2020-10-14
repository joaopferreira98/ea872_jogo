/* MODEL */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-keystate.hpp"

SDLKeyState::SDLKeyState(){
}

/* define o estado atual do teclado */
void SDLKeyState::set_state(const Uint8 *state){
    this->state = state;
}

/* define o evento */
void SDLKeyState::set_event(SDL_Event evento){
    this->evento = evento;
}

/* retorna o endereco do vetor de estados do teclado */
const Uint8* SDLKeyState::get_state(){
    return state;
}

/* retorna o endereco do evento */
SDL_Event* SDLKeyState::get_event(){
    return &evento;
}

/* retorna o tipo de evento */
Uint32 SDLKeyState::get_event_type(){
    return evento.type;
}

/* retorna o estado da seta para baixo */
int SDLKeyState::get_arrow_down(){
    return state[SDL_SCANCODE_DOWN];
}

/* retorna o estado da seta para cima */
int SDLKeyState::get_arrow_up(){
    return state[SDL_SCANCODE_UP];
}