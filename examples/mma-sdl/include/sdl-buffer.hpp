/* CONTROLLER */

/* bibliotecas que utilizaremos em nossas definicoes */
#include <memory>

/* header files de classes que utilizaremos em nossa definicao */
#include "../include/sdl-position.hpp"
#include "../include/sdl-ptr.hpp"
#include "../include/sdl-textures.hpp"
#include "../include/sdl-view.hpp"

/* pra evitar conflitos de nome */
#pragma once

/* namespace pra facilitar alguns comandos */
using namespace std;

/* essa classe vai ser responsavel por atualizar o buffer de exibicao */
class SDLBuffer{
    private:
        SDL_Rect target; /* quadrado onde a textura vai ser desenhada */
        shared_ptr<SDLPosition> const sdlpos; /* posicao na tela */
        shared_ptr<SDLPointer> const sdlptr; /* struct do render e da janela */
        shared_ptr<SDLTextures> const sdltextures; /* texturas */
        shared_ptr<SDLView> const sdlview; /* visualizacao */
    public:
        SDLBuffer(shared_ptr<SDLPosition> sdlpos, shared_ptr<SDLPointer> sdlptr, shared_ptr<SDLTextures> sdltextures, shared_ptr<SDLView> sdlview);
        void buffer_update();
        void det_tex(const char* tex_path); /* configura a textura do bloco */
        ~SDLBuffer();
};