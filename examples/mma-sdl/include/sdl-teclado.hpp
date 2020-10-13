/* MODEL */

/* bibliotecas que ela vai utilizar na suas definicoes */
#include <SDL2/SDL.h>

/* evita conflitos de nome */
#pragma once


class SDLTeclado{
   public:
        const Uint8* state;// acho que tem que ser privado, mas nao funcionou no private
        SDLTeclado();
        void atualiza_teclado();
};