/* bibliotecas que essa classe utiliza em suas definicoes */
#include <SDL2/SDL.h>

/* pra evitar conflitos de nome */
#pragma once

class SDLRender{
    private:
        SDL_Window* janela; /* struct da janela */
        SDL_Renderer* renderer; /* struct do renderer */
    public:
        SDLRender(); /* inicializa o sistema do SDL */
        int window_init(); /* inicializa a janela */
        int render_init(); /* iniciliza o renderizador */
        ~SDLRender(); /* encerra esses processos */
};