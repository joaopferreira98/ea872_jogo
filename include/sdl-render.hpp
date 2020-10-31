/* CONTROLLER */

/* bibliotecas que essa classe utiliza em suas definicoes */
#include <memory>
#include <SDL2/SDL.h>

/* model que armazena esses parametros */
#include "../include/sdl-ptr.hpp"

/* pra evitar conflitos de nome */
#pragma once

/* pra facilitar alguns comandos */
using namespace std;

class SDLRender{
    private:
        SDLPointer &sdlptr;
    public:
        SDLRender(SDLPointer &sdlptr); /* inicializa o sistema do SDL */
        int window_init(); /* inicializa a janela */
        int render_init(); /* iniciliza o renderizador */
        ~SDLRender(); /* encerra esses processos */
};