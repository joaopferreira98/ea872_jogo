/* VIEW */

/* bibliotecas que essa classe necessita */
#include <SDL2/SDL.h>

/* pra evitar conflitos de nome */
#pragma once

/* essa classe vai ser a responsavel por exibir a simulacao na tela */
class SDLView{
    public:
        SDLView();
        void scene_clear(SDL_Renderer* renderer); /* limpa o que estava sendo exibido */
        void scene_draw(SDL_Renderer* renderer); /* exibe na tela o conteudo do buffer */
};