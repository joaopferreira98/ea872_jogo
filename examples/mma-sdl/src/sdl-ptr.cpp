/* MODEL */

/* bibliotecas que ela vai utilizar na suas definicoes */
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-ptr.hpp"

void SDLPointer::set_window(SDL_Window *janela){
    this->janela = janela;
}

void SDLPointer::set_renderer(SDL_Renderer *renderer){
    this->renderer = renderer;
}

SDL_Window* SDLPointer::get_window(){
    return janela;
}

SDL_Renderer* SDLPointer::get_renderer(){
    return renderer;
}