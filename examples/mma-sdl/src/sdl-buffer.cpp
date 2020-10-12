/* CONTROLLER */ 

/* bibliotecas que essa classe vai utilizar em suas funcoes */
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

/* header file dessa classe e de outras que ela vai precisar */
#include "../include/sdl-buffer.hpp"
#include "../include/sdl-position.hpp"
#include "../include/sdl-render.hpp"
#include "../include/sdl-textures.hpp"
#include "../include/sdl-view.hpp"

SDL_Texture *texture; /* struct da textura */ 

/* o construtor dessa classe vai inicializar todas as responsaveis */
SDLBuffer::SDLBuffer(shared_ptr<SDLPosition> sdlpos, shared_ptr<SDLRender> sdlrender, shared_ptr<SDLTextures> sdltextures, shared_ptr<SDLView> sdlview):
    sdlpos(sdlpos),
    sdlrender(sdlrender),
    sdltextures(sdltextures),
    sdlview(sdlview)
{
    target.x = 0;
    target.y = 0;

    texture = sdltextures->get_texture();
    SDL_QueryTexture(texture, nullptr, nullptr, &target.w, &target.h); /* inicializa a posicao inicial da textura */
}

/* atualiza o buffer */


/* define a textura */

void SDLBuffer::det_tex(const char tex_path){
    sdltextures->set_texture( ,IMG_LoadTexture(tex_path));
}

/* o destrutor dessa classe vai limpar o buffer */
SDLBuffer::~SDLBuffer(){
    SDL_DestroyTexture(texture);
}