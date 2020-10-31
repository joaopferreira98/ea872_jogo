/* NAV.io - Versão Local */
/* Código Principal */

/* bibliotecas gerais que iremos utilizar */
#include <SDL2/SDL.h>
#include <iostream>

/* classes do SDL */
#include "sdl-render.hpp"
#include "sdl-ptr.hpp"
#include "sdl-textures.hpp"
#include "sdl-position.hpp"
#include "sdl-view.hpp"
#include "sdl-buffer.hpp"
#include "sdl-keystate.hpp"
#include "sdl-keyread.hpp"

/* utiliza o namespace sdl para facilitar alguns comandos */
using namespace std;

int main(){

    /* classes do sdl */
    SDLPointer sdlptr;
    SDLTextures sdltex;
    SDLPosition sdlpos;
    SDLView sdlview;
    SDLRender sdlrender(sdlptr);
    SDLBuffer sdlbuffer(sdlpos, sdlptr, sdltex, sdlview);
    SDLKeyState sdlkeystate;
    SDLKeyRead sdlkeyread(sdlkeystate, sdlpos);
    
    /* inicializa a janela e o renderizador */
    sdlrender.window_init();
    sdlrender.render_init();

    /* inicia a textura do bloco, com dimensoes 40x40 */
    sdlbuffer.det_tex("../assets/sprites/png/ships/ship-player.png", 32, 32);

    /* posicao inicial da nave  no centro da tela */
    sdlpos.set_position(320,240);

    /* variavel para determinar se a simulacao ainda deve continuar */ 
    bool rodando = true;

    /* laco principal */
    while(rodando){
        sdlkeyread.update(); /* atualiza estado do teclado */
        sdlkeyread.polling(); /* Polling de eventos */
        sdlkeyread.eventos(); /* verifica se o usuario clicou no 'X' para fechar a tela */ 

        /* atualiza tela */
        sdlbuffer.buffer_update();
        }

    return 0;
}