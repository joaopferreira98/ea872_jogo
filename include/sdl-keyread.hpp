/* CONTROLLER */

/* bibliotecas que essa classe utiliza em suas definicoes */
#include <SDL2/SDL.h>

/* header files que essa definicao utiliza */
#include "../include/sdl-keystate.hpp"
#include "../include/sdl-position.hpp"

/* pra evitar conflitos de nome */
#pragma once

/* para simplificar alguns comandos */
using namespace std;

class SDLKeyRead{
       private:
 	       SDLKeyState &sdlkeystate;
              SDLPosition &sdlpos;
       public:
              SDLKeyRead(SDLKeyState &sdlkeystate, SDLPosition &sdlpos);
              void update(); /* atualiza o teclado */        
              void polling(); // funcao de polling de eventos
              void eventos(); // verifica ocorrencia de eventos
};
        