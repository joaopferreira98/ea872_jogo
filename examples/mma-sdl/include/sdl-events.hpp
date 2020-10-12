/* CONTROLLER */

/* bibliotecas que essa classe utiliza em suas definicoes */
#include <SDL2/SDL.h>

/* pra evitar conflitos de nome */
#pragma once

class SDLEvents{
    private:
        SDL_Event evento; // eventos discretos
 		const Uint8* state; // estado do teclado
 		shared_ptr<SDLPosition> pixposition; // por enquanto
 		bool rodando;
    public:
        SDLEvents(); // inicializa estado do teclado
        void polling(); // funcao de polling de eventos
};
        