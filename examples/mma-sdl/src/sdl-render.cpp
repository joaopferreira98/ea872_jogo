/* CONTROLLER */

/* bibliotecas que iremos utilizar */
#include <iostream>
#include <SDL2/SDL.h>

/* header file dessa classe */
#include "../include/sdl-render.hpp"

/* utiliza o namespace std pra simplificar alguns comandos */
using namespace std;

/* definicoes do tamanho da tela */
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

/* o construtor da classe incializa o modulo view do SDL */
SDLRender::SDLRender(){
    if ((SDL_Init(SDL_INIT_VIDEO)) < 0 ){
        cout << SDL_GetError();
    }
}

/* o destrutor encerra esses processos */
SDLRender::~SDLRender(){
    SDL_DestroyRenderer(this->renderer);
    SDL_DestroyWindow(this->janela);
    SDL_Quit();
}

int SDLRender::window_init(){
    /* inicializa a janela com os parametros definidos */
    this->janela = nullptr;
    this->janela = SDL_CreateWindow("Demonstracao do SDL2",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    SCREEN_WIDTH,
    SCREEN_HEIGHT,
    SDL_WINDOW_SHOWN);

    /* checa se teve algum problema na hora de criar a janela */
    if (this->janela==nullptr){
        cout << SDL_GetError();
        SDL_Quit();
        return 1;
    }
    return 0;
}

int SDLRender::render_init(){
    /* inicializa o renderer com os parametros definidos */
    this->renderer = SDL_CreateRenderer(this->janela, -1,
    SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    /* checa se houve algum problema na hora de criar o renderer */
    if (this->renderer == nullptr){ 
        SDL_DestroyWindow(this->janela);
        cout << SDL_GetError();
        SDL_Quit();
        return 1;
    }
    return 0;
}