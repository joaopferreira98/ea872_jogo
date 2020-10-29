/* CODIGO PRINCIPAL */

/* bibliotecas gerais que iremos utilizar */
#include <memory>
#include <SDL2/SDL.h>
#include <iostream>

/* classes do simulador físico */
#include "dinamicos.hpp"
#include "oscilador.hpp"
#include "visualizacao.hpp"
#include "equacoes.hpp"
#include "telacalc.hpp"

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
    Dinamicos dynamics; /* classe dos parametros dinamicos */
    Oscilador oscillator; /* classe dos parametros do oscilador */
    Visualizacao view; /* classe para visualizacao */
    Equacoes modelo(dynamics, oscillator, view); /* classe para as equacoes */

    /* classes do sdl */
    SDLPointer sdlptr;
    SDLTextures sdltex;
    SDLPosition sdlpos;
    SDLView sdlview;
    SDLRender sdlrender(sdlptr);
    SDLBuffer sdlbuffer(sdlpos, sdlptr, sdltex, sdlview);
    SDLKeyState sdlkeystate;
    SDLKeyRead sdlkeyread(dynamics, sdlkeystate);

    TelaCalc pixel_calc(dynamics, view, sdlpos); /* classe para calcular a posicao na tela */

    modelo.parametros_dinamicos(0.0, 0.0, 0, 0); /* parametros dinamicos iniciais da massa */
    modelo.parametros_sistema(5.0, 10.0, 5.0, 10.0); /* parametros do oscilador */
    
    /* inicializa a janela e o renderizador */
    sdlrender.window_init();
    sdlrender.render_init();

    /* inicia a textura do bloco, com dimensoes 40x40 */
    sdlbuffer.det_tex("../assets/mass.png", 40, 40);
    
    /* variavel para determinar se a simulacao ainda deve continuar */ 
    bool rodando = true;

    /* laco principal */
    while(rodando){
        sdlkeyread.update(); /* atualiza estado do teclado */
        sdlkeyread.polling(); /* Polling de eventos */
        sdlkeyread.eventos(); /* verifica se o usuario clicou no 'X' para fechar a tela */ 

        /* realiza uma iteracao de simulacao */
        modelo.calculo();
        pixel_calc.position();

        /* atualiza tela */
        sdlbuffer.buffer_update();
        }

    return 0;
}