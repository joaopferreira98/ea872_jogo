/* VIEW */

/* bibliotecas que essa classe vai utilizar */
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-view.hpp"

SDLView::SDLView(){
}

/* essa funcao vai limpar o que estava sendo exibido */
void SDLView::scene_clear(SDL_Renderer* renderer){
    SDL_RenderClear(renderer);
}

/* essa funcao vai exibir na tela o conteudo atual do buffer */
void SDLView::scene_draw(SDL_Renderer* renderer){
    SDL_RenderPresent(renderer);
}