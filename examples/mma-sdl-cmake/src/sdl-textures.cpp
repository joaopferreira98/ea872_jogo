/* MODEL */

/* bibliotecas que iremos utilizar */
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-textures.hpp"

/* funcao para carregar uma textura */
void SDLTextures::set_texture(SDL_Texture* textura){
    this->textura = textura;
}

/* funcao para retornar o endereco da textura armazenada */
SDL_Texture* SDLTextures::get_texture(){
    return textura;
}