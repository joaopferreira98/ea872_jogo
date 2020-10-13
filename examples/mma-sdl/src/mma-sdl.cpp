/* CODIGO PRINCIPAL */

/* bibliotecas gerais que iremos utilizar */
#include <memory>
#include <SDL2/SDL.h>
#include <iostream>

/* classes do simulador físico */
#include "../include/dinamicos.hpp"
#include "../include/oscilador.hpp"
#include "../include/visualizacao.hpp"
#include "../include/equacoes.hpp"
#include "../include/telacalc.hpp"

/* classes do SDL */
#include "../include/sdl-render.hpp"
#include "../include/sdl-ptr.hpp"
#include "../include/sdl-textures.hpp"
#include "../include/sdl-position.hpp"
#include "../include/sdl-view.hpp"
#include "../include/sdl-buffer.hpp"
#include "../include/sdl-teclado.hpp"
#include "../include/sdl-events.hpp"

/* utiliza o namespace sdl para facilitar alguns comandos */
using namespace std;

int main(){
    shared_ptr<Dinamicos> dynamics (new Dinamicos); /* classe dos parametros dinamicos */
    shared_ptr<Oscilador> oscillator (new Oscilador); /* classe dos parametros do oscilador */
    shared_ptr<Visualizacao> view (new Visualizacao); /* classe para visualizacao */
    unique_ptr<Equacoes> modelo (new Equacoes(dynamics, oscillator, view)); /* classe para as equacoes */

    /* classes do sdl */
    shared_ptr<SDLPointer> sdlptr (new SDLPointer);
    shared_ptr<SDLTextures> sdltex (new SDLTextures);
    shared_ptr<SDLPosition> sdlpos (new SDLPosition);
    shared_ptr<SDLView> sdlview (new SDLView);
    unique_ptr<SDLRender> sdlrender (new SDLRender(sdlptr));
    unique_ptr<SDLBuffer> sdlbuffer (new SDLBuffer(sdlpos, sdlptr, sdltex, sdlview));
    shared_ptr<SDLTeclado> sdltec (new SDLTeclado);
    shared_ptr<SDLEvents> sdlevents (new SDLEvents(dynamics, sdltec));

    unique_ptr<TelaCalc> pixel_calc (new TelaCalc(dynamics, view, sdlpos, 10)); /* classe para calcular a posicao na tela */

    modelo->parametros_dinamicos(0.0, 10.0, 0, 0); /* parametros dinamicos iniciais da massa */
    modelo->parametros_sistema(5.0, 10.0, 5.0, 0); /* parametros do oscilador */
    
    dynamics->set_fext(20); /* forca externa */

    sdlrender->window_init();
    sdlrender->render_init();

    sdlbuffer->det_tex("./assets/mass.png", 40, 40);
    
    //variavel para determinar se a simulacao ainda deve continuar 
    bool rodando = true;
    // laco principal
    while(rodando){
        sdltec->atualiza_teclado();// atualiza estado do teclado
        sdlevents->polling();// Polling de eventos
        sdlevents->eventos();// verifica se o usuario clicou no 'X' para fechar a tela, esse eh o nosso unico evento 

        /* realiza uma iteracao de simulacao */
        modelo->calculo();
        pixel_calc->position();

        /* atualiza tela */
        sdlbuffer->buffer_update();
        }

    return 0;
}