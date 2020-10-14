/* CONTROLLER */

/* bibliotecas que essa classe utiliza em suas definicoes */
#include <SDL2/SDL.h>
#include <memory>

/* header files que essa definicao utiliza */
#include "../include/dinamicos.hpp"
#include "../include/sdl-keystate.hpp"

/* pra evitar conflitos de nome */
#pragma once

/* para simplificar alguns comandos */
using namespace std;

class SDLKeyRead{
    private:
        shared_ptr<Dinamicos> const dynamics; 
 		shared_ptr<SDLKeyState> const sdlkeystate;
 	public:
        SDLKeyRead(shared_ptr<Dinamicos> dynamics, shared_ptr<SDLKeyState> sdlkeystate);
        void update(); /* atualiza o teclado */        
        void polling(); // funcao de polling de eventos
        void eventos(); // verifica ocorrencia de eventos
};
        