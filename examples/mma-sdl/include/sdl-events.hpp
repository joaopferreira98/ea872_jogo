/* CONTROLLER */

/* bibliotecas que essa classe utiliza em suas definicoes */
#include <SDL2/SDL.h>

/* pra evitar conflitos de nome */
#pragma once

/* para simplificar alguns comandos */
using namespace std;

class SDLEvents{
    private:
        //SDL_Event evento; // eventos discretos
 		shared_ptr<Dinamicos> const dynamics; //
 		shared_ptr<SDLTeclado> const sdltec;
 		float forcaext;
 		float f;
 		//bool e;


 	public:
        SDLEvents(shared_ptr<Dinamicos> dynamics, shared_ptr<SDLTeclado> sdltec); // inicializa estado do teclado
        void polling(); // funcao de polling de eventos
        //void eventos();
};
        