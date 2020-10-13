/* CONTROLLER */ 

/* bibliotecas que essa classe vai utilizar em suas funcoes */
#include <memory>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

/* header file dessa classe e de outras que ela vai precisar */
#include "../include/sdl-buffer.hpp"
#include "../include/sdl-position.hpp"
#include "../include/sdl-ptr.hpp"
#include "../include/sdl-textures.hpp"
#include "../include/sdl-view.hpp"

/* o construtor dessa classe vai inicializar todas as responsaveis */
SDLBuffer::SDLBuffer(shared_ptr<SDLPosition> sdlpos, shared_ptr<SDLPointer> sdlptr, shared_ptr<SDLTextures> sdltextures, shared_ptr<SDLView> sdlview):
    sdlpos(sdlpos),
    sdlptr(sdlptr),
    sdltextures(sdltextures),
    sdlview(sdlview)
{
    SDL_Rect target;
    target.x = 0;
    target.y = 0;
}

/* atualiza o buffer */
void SDLBuffer::buffer_update(){
    sdlview->scene_clear(sdlptr->get_renderer());
    SDL_RenderCopy(sdlptr->get_renderer(), sdltextures->get_texture(), nullptr, nullptr);
    sdlview->scene_draw(sdlptr->get_renderer());

    SDL_Delay(10);
}

/* define a textura */
void SDLBuffer::det_tex(const char* tex_path){
    sdltextures->set_texture(IMG_LoadTexture(sdlptr->get_renderer(), tex_path));
    SDL_QueryTexture(sdltextures->get_texture(), nullptr, nullptr, &target.w, &target.h); /* inicializa a posicao inicial da textura */
}

/* o destrutor dessa classe vai limpar o buffer */
SDLBuffer::~SDLBuffer(){
    SDL_DestroyTexture(sdltextures->get_texture());
}