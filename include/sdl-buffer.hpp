/* CONTROLLER */

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
        SDLPosition &sdlpos; /* posicao na tela */
        SDLPointer &sdlptr; /* struct do render e da janela */
        SDLTextures &sdltextures; /* texturas */
        SDLView &sdlview; /* visualizacao */
    public:
        SDLBuffer(SDLPosition &sdlpos, SDLPointer &sdlptr, SDLTextures &sdltextures, SDLView &sdlview);
        void buffer_update(); /* atualiza o buffer */
        void det_tex(const char* tex_path, int width, int height); /* configura a textura do bloco */
        ~SDLBuffer();
};