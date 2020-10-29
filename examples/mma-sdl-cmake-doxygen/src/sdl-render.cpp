/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <iostream>
#include <SDL2/SDL.h>

/* header file dessa classe e a dos ponteiros */
#include "../include/sdl-render.hpp"
#include "../include/sdl-ptr.hpp"

/* utiliza o namespace std pra simplificar alguns comandos */
using namespace std;

/* definicoes do tamanho da tela */
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

/* o construtor da classe incializa o modulo view do SDL */
SDLRender::SDLRender(SDLPointer &sdlptr):
    sdlptr(sdlptr)    
{
    if ((SDL_Init(SDL_INIT_VIDEO)) < 0 ){
        cout << SDL_GetError();
    }
}

/* o destrutor encerra esses processos */
SDLRender::~SDLRender(){
    SDL_DestroyRenderer(sdlptr.get_renderer());
    SDL_DestroyWindow(sdlptr.get_window());
    SDL_Quit();
}

int SDLRender::window_init(){
    /* inicializa a janela com os parametros definidos */
    sdlptr.set_window(nullptr);
    sdlptr.set_window(SDL_CreateWindow("Simulador de Sistema Massa-Mola-Amortecedor",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    SCREEN_WIDTH,
    SCREEN_HEIGHT,
    SDL_WINDOW_SHOWN));

    /* checa se teve algum problema na hora de criar a janela */
    if (sdlptr.get_window() == nullptr){
        cout << SDL_GetError();
        SDL_Quit();
        return 1;
    }
    return 0;
}

int SDLRender::render_init(){
    /* inicializa o renderer com os parametros definidos */
    sdlptr.set_renderer(SDL_CreateRenderer(sdlptr.get_window(), -1,
    SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC));

    /* checa se houve algum problema na hora de criar o renderer */
    if (sdlptr.get_renderer() == nullptr){ 
        SDL_DestroyWindow(sdlptr.get_window());
        cout << SDL_GetError();
        SDL_Quit();
        return 1;
    }
    return 0;
}