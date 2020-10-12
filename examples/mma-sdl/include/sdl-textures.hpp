/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

/* para evitar conflitos de nome */
#pragma once

class SDLTextures{
    private:
        SDL_Texture *texture; /* struct para armazenar as texturas*/
    public:
        void set_texture(const char textura); /* funcao para definir a textura a ser armazenada pela classe */
};